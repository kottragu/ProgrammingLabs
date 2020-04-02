#ifndef LAB4_TRIANGLE_H
#define LAB4_TRIANGLE_H
#include "interface.h"

class triangle: public figure_all{
private:
    CVector2D pos;
    const char* name = "triangle";
    double side;
    double _mass = 0;
public:
    triangle();
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
    ~triangle() = default;
};

#endif
