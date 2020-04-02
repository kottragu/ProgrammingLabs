#include "add.h"

circle::circle(){
    pos = {0,0};
    r = 0;
}
double circle::square(){
    return PI*r*r;             // sqrt((pos.x)*(pos.x) + (pos.y)*(pos.y)))*(sqrt((pos.x)*(pos.x) + (pos.y)*(pos.y)));
}

double circle::perimeter() {
    return 2*PI*r;
}

const char* circle::classname() const {
    return name;
}

unsigned int circle::size() const{
    int rez = sizeof(double)*4 + 6* sizeof(char);
    return rez;
}

void circle::initFromDialog() {
    std::string s;
    std::cout << "Write value of position" << std::endl;
    double num1, num2;
    std::cin >> num1 >> num2;
    pos = {num1, num2};
    std::cout << "Write value of radius" << std::endl;
    std::cin >> r;
}

void circle::draw() {
   std::cout << "Name is " << name << std::endl << "Position is (" << pos.x <<";" << pos.y << ")" << std::endl <<"Radius is " << r << std::endl << "Mass is " << _mass << std::endl;
}

bool circle::operator<(const IPhysObject& ob) const {
    return mass() == ob.mass();
}

bool circle::operator==(const IPhysObject& ob ) const {
    return mass() == ob.mass();
}

double circle::mass() const {
    return _mass;
}

CVector2D circle::position() {
    return pos;
}