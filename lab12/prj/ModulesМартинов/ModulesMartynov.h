#include <string>
#include <fstream>
#ifndef MODULESМартинов_H_INCLUDED
#define MODULESМартинов_H_INCLUDED



double s_calculation(double x, double y, double z);
struct TempResult {
    double celsius;
    double fahrenheit;
};
class ClassLab12_Martynov {
private:
    double a;   // довжина, см
    double b;   // ширина, см
    double h;   // висота, см

public:
    // Конструктор з параметрами за замовчуванням
    ClassLab12_Martynov(double a = 1.0, double b = 1.0, double h = 1.0);

    // Геттери (надання значень атрибутів)
    double getA() const;
    double getB() const;
    double getH() const;

    // Метод обчислення об'єму
    double getVolume() const;

    // Сеттери (зміна атрибутів) -- перевантажені функції-члени
    bool setA(double a);
    bool setB(double b);
    bool setH(double h);

    // Зміна всіх атрибутів одразу (з параметрами за замовчуванням)
    bool setDimensions(double a = 1.0, double b = 1.0, double h = 1.0);
};

#endif
