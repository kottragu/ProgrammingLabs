#include "triangle.h"
triangle::triangle(){
    pos = {0, 0};
    side = 1;
}

CVector2D triangle::position() {
    return pos;
}

double triangle::perimeter() {
    return 3*side;
}

double triangle::square() {
    return 1.0/2*side*sqrt(3.0/4*side*side);
}

double triangle::mass() const{
    return _mass;
}

bool triangle::operator==(const IPhysObject &ob) const {
    return mass() == ob.mass();
}

bool triangle::operator<(const IPhysObject &ob) const {
    return mass() < ob.mass();
}

void triangle::draw(){
    std::cout << "Name is " << name << std::endl << "Left corner of triangle is (" << pos.x <<";" << pos.y << ")" << std::endl << "Side is " << side  << std::endl << "Mass is " << _mass << std::endl;
}

const char* triangle::classname() const {
    return name;
}

void triangle::initFromDialog() {
    double num1, num2;
    std::cout << "Write value is left corner:" << std::endl;
    std::cin >> num1 >> num2;
    pos = {num1, num2};
    std::cout << "Write value of side" << std::endl;
    std::cin >> side;
}

unsigned int triangle::size() const {
    return 8*sizeof(char)+ 2*sizeof(double);
}