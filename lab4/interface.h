#ifndef LAB4_INTERFACE_H
#define LAB4_INTERFACE_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
// Интерфейс "Геометрическая фигура".
class IGeoFig {
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;
};


// Вектор
class CVector2D {
public:
    double x, y;
    CVector2D(){
        x = 0;
        y = 0;
    }
    CVector2D(double _x, double _y){
        x = _x;
        y = _y;
    }
    ~CVector2D() = default;
};

// Интерфейс "Физический объект".
class IPhysObject {
public:
// Масса, кг.
    virtual double mass() const = 0;
// Координаты центра масс, м.
    virtual CVector2D position() = 0;
// Сравнение по массе.
    virtual bool operator== (const IPhysObject& ob ) const = 0;
// Сравнение по массе.
    virtual bool operator< (const IPhysObject& ob ) const = 0;
};

// Интерфейс "Отображаемый"
class IPrintable {
public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
    virtual void draw() = 0;
};

// Интерфейс для классов, которые можно задать через диалог с пользователем.
class IDialogInitiable {
public:
// Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() = 0;
};

// Интерфейс "Класс"
class BaseCObject {
public:
// Имя класса (типа данных).
    virtual const char* classname() const = 0;
// Размер занимаемой памяти.
    virtual unsigned int size() const = 0;
};

class figure_all: public IGeoFig, public CVector2D, public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject{

};


#endif
