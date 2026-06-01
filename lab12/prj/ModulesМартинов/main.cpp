#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include "ModulesMartynov.h"

double s_calculation(double x, double y, double z)
{
    double part1 = sqrt(fabs(z - 2 * x));
    double part2 = x * sin(pow(x, 2 * z) * y);
    return fabs(part1 - part2);
}
ClassLab12_Martynov::ClassLab12_Martynov(double a, double b, double h)
{
    this->a = (a > 0) ? a : 1.0;
    this->b = (b > 0) ? b : 1.0;
    this->h = (h > 0) ? h : 1.0;
}
double ClassLab12_Martynov::getA() const
{
    return a;
}
double ClassLab12_Martynov::getB() const
{
    return b;
}
double ClassLab12_Martynov::getH() const
{
    return h;
}
double ClassLab12_Martynov::getVolume() const
{
    return a * b * h;
}
bool ClassLab12_Martynov::setA(double a)
{
    if (a <= 0) return false;
    this->a = a;
    return true;
}
bool ClassLab12_Martynov::setB(double b)
{
    if (b <= 0) return false;
    this->b = b;
    return true;
}
bool ClassLab12_Martynov::setH(double h)
{
    if (h <= 0) return false;
    this->h = h;
    return true;
}
bool ClassLab12_Martynov::setDimensions(double a, double b, double h)
{
    if (a <= 0 || b <= 0 || h <= 0) return false;
    this->a = a;
    this->b = b;
    this->h = h;
    return true;
}

