#include <cmath>

double s_calculation(double x, double y, double z)
{
    double part1 = sqrt(fabs(z - 2 * x));
    double part2 = x * sin(pow(x, 2 * z) * y);
    double S = fabs(part1 - part2);
    return S;
}
