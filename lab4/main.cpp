#include "add.h"
#include "triangle.h"
using namespace std;

//int fig_num;
int num_this_fig = 0;
int _count = 0;
std::vector<figure_all*> vec;

int commands(){
    int num;
    cout << "1 - Print all figures" << endl; 
    cout << "2 - square of all figures" << endl;
    cout << "3 - perimeter of all figures" << endl;
    cout << "4 - all mass" << endl;
    cout << "5 - all memory " << endl;
    cout << "6 - sort figures by mass " << endl;
    cout << "7 - create new figure" << endl;
    cout << "8 - exit " << endl;
    cin >> num;
    return num;
}

void _create_fig(string _s){
    for(int i = 0; i < _s.size(); i++){
        _s[i] = (char)tolower(_s[i]);
    }
    if (_s == "circle" ){
        string _fl;
        cout << "Do you want to use default circle?" << endl;
        cin >> _fl;
        for(int i = 0; i < _fl.size(); i++){
            _fl[i] = (char)tolower(_fl[i]);
        }
        if (_fl == "yes"){
            vec.push_back(new circle());
        }
        if (_fl == "no") {
            vec.push_back(new circle());
            vec[::_count]->initFromDialog();
            ::_count++;
        }
    }

    if (_s == "triangle" ){
        string _fl;
        cout << "Do you want to use default triangle?" << endl;
        cin >> _fl;
        for(int i = 0; i < _fl.size(); i++){
            _fl[i] = (char)tolower(_fl[i]);
        }
        if (_fl == "yes"){
            vec.push_back(new triangle());
        }
        if (_fl == "no") {
            vec.push_back(new triangle());
            vec[::_count]->initFromDialog();
            ::_count++;
        }
    }
}

void choose_fig(){
    string s;
    cout << "Which figures do you want to create?" << endl;
    cin >> s;
    _create_fig(s);
    ::num_this_fig++;
}


int main() {
    choose_fig();
    int num_com = 0;
    while(num_com != 8){
        cout << "Do you want to see available commands?" << endl;
        string w_s;
        cin >> w_s;
        for (int i = 0; i < w_s.size(); i++) {
            w_s[i] = (char) tolower(w_s[i]);
        }
        if (w_s == "yes") {
            num_com = commands();
        } else {
            cin >> num_com;
        }

        if(num_com == 1){
            for(auto it: vec){
                it->draw();
            }
        }
        if(num_com == 2){
            double sum = 0;
            for(auto it: vec){
                sum += it->square();
            }
            cout << "Total square is " << sum << endl;
        }
        if(num_com == 3){
            double sum = 0;
            for(auto it: vec){
                sum += it->perimeter();
            }
            cout << "Total perimeter is " << sum << endl;
        }
        if(num_com == 4){
            double _mass_ = 0;
            for(auto it: vec){
                _mass_ += it->mass();
            }
            cout << "All mass is " << _mass_ << endl;
        }
        if(num_com == 5){
            double _size = 0;
            for(auto it: vec){
                _size += it->size();
            }
            cout << "All size is " << _size << endl;
        }
        if(num_com == 6){
            for(int i = 0; i < vec.size(); i ++){
                for(int j = 0; j < vec.size()-(i+1); i++){
                    if(vec[j]->mass() > vec[j+1]->mass()){
                        auto temp = vec[j];
                        vec[j] = vec[j+1];
                        vec[j+1] = temp;
                    }
                }
            }
        }
        if(num_com == 7){
            choose_fig();
            continue;
        }
        if(num_com == 8){
            exit(0);
        }
    }
    return 0;
}
