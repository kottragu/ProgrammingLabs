#ifndef LAB4_ADD_H
#define LAB4_ADD_H
#include "interface.h"
const double PI = 3.141592653589793;

class circle: public figure_all{
private:
    CVector2D pos;
    const char* name = "circle";
    double r;
    double _mass = 0;
public:
    circle();
    double perimeter() override;
    double mass() const override;
    double square() override;
    CVector2D position() override;
    bool operator==(const IPhysObject& ob ) const override;
    bool operator<(const IPhysObject& ob) const override;
    void draw() override;
    void initFromDialog() override;
    const char* classname() const override;
    unsigned int size() const override;
    ~circle() = default;
};

#endif
