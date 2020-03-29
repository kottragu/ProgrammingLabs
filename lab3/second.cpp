#include "add.h"
Matrix::Matrix(float matrix[3][3]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            _matrix[i][j] = matrix[i][j];
        }
    }
}


Matrix Matrix::operator+ (float arr1[3][3]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            arr1[i][j] += _matrix[i][j];
        }
    }
    return arr1;
}

Matrix Matrix::operator-(float arr1[3][3]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            arr1[i][j] -= _matrix[i][j];
        }
    }
    return arr1;
}

bool Matrix::operator > (float arr[3][3]){
    float _det = 0, det = 0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            _det = arr[i][j] + arr[(i+1)%3][(j+1)%3] + arr[(i+2)%3][(j+2)%3];
        }
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            det = arr[i][(j+2)%3] + arr[(i+1)%3][(j+1)%3] + arr[(i+2)%3][j];
        }
    }

    float _det1 = 0, det1 = 0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            _det1 = _matrix[i][j] + _matrix[(i+1)%3][(j+1)%3] + _matrix[(i+2)%3][(j+2)%3];
        }
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            det1 = _matrix[i][(j+2)%3] + _matrix[(i+1)%3][(j+1)%3] + _matrix[(i+2)%3][j];
        }
    }
    _det -=det;
    _det1 -= det1;
    if (_det1 > _det){
        return true;
    } else {
        return false;
    }
}

bool Matrix::operator < (float arr[3][3]){
    float _det = 0, det = 0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            _det = arr[i][j] + arr[(i+1)%3][(j+1)%3] + arr[(i+2)%3][(j+2)%3];
        }
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            det = arr[i][(j+2)%3] + arr[(i+1)%3][(j+1)%3] + arr[(i+2)%3][j];
        }
    }

    float _det1 = 0, det1 = 0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            _det1 = _matrix[i][j] + _matrix[(i+1)%3][(j+1)%3] + _matrix[(i+2)%3][(j+2)%3];
        }
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            det1 = _matrix[i][(j+2)%3] + _matrix[(i+1)%3][(j+1)%3] + _matrix[(i+2)%3][j];
        }
    }
    _det -=det;
    _det1 -= det1;
    if (_det1 < _det){
        return true;
    } else {
        return false;
    }
}

bool Matrix::operator!=(float arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (_matrix[i][j] != arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

bool Matrix::operator==(float arr[3][3]){
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (_matrix[i][j] != arr[i][j]){
                return false;
            }
        }
    }
    return true;
}

Matrix Matrix::operator*(float n) {
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            _matrix[i][j] *= n;
        }
    }
    float Matrix_[3][3];
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            Matrix_[i][j] = _matrix[i][j] * n;
        }
    }

    return _matrix;
}

Matrix Matrix::operator*(float arr1[3][3]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            arr1[i][j] *= _matrix[i][j];
        }
    }
    return arr1;
}

void Matrix::_output(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << _matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}





Subset::Subset(std::vector<int> &vec){
    for (auto it: vec){
        data.push_back(it);
    }
}

Subset Subset::operator+(std::vector<int> &vec){
    bool contains [vec.size()];
    for(int i = 0; i < vec.size()-1;i++){
        contains[i] = false;
    }
    // проверка на наличие  в новом векторе значений из data
    for (auto it: vec){
        for (int i = 0; i < vec.size()-1; i++){
            if (it == data[i]){
                contains[i] = true;
            }
        }
    }
    //
    int count = 0;
    for (bool it: contains){
        if (it == false){
            data.push_back(vec[count]);
        }
        count++;
    }
    return data;
}

bool Subset::operator==(std::vector<int> &vec){
    if (data.size() != vec.size()){
        return false;
    } else {
        bool contains[data.size()];
        for(int i = 0; i < data.size(); i++){
            contains[i] = false;
        }

        for(int i = 0; i < data.size()-1; i++){
            for(int j = 0; j < vec.size()-1; j++){
                if (data[i] == vec[j]){
                    contains[i] = true;
                }
            }
        }

        bool flag = true;
        for (auto it: contains){
            if (it == false){
                flag = false;
            }
        }
        return flag;
    }
}

bool Subset::operator!=(std::vector<int> &vec){
    if (data.size() != vec.size()){
        return true;
    } else {
        bool contains[data.size()];
        for(int i = 0; i < data.size(); i++){
            contains[i] = false;
        }

        for(int i = 0; i < data.size()-1; i++){
            for(int j = 0; j < vec.size()-1; j++){
                if (data[i] == vec[j]){
                    contains[i] = true;
                }
            }
        }

        bool flag = true;
        for (auto it: contains){
            if (it == false){
                flag = false;
            }
        }
        return !flag;
    }
}

Subset Subset::operator+=(int number){
    bool contains = false;
    for (int i = 0; i < data.size()-1; i++){
        if(data[i] == number){
            contains = true;
        }
    }
    if (!contains) {
        data.push_back(number);
    }
}


Subset Subset::operator-=(int number){
    bool contains = false;
    auto k = data.begin();
    for (int i = 0; i < data.size()-1; i++){
        if(data[i] == number){
            contains = true;
            break;
        }
        k++;
    }
    if (contains) {
        data.erase(k);
    }
}

void Subset::Count(){
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << " ";
    }
}
