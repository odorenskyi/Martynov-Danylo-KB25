#include <cmath>
#include <cstdio>
#include "ModulesМартинов.h"

double s_calculation(double x, double y, double z)
{
    double part1 = sqrt(fabs(z - 2 * x));
    double part2 = x * sin(pow(x, 2 * z) * y);
    double S = fabs(part1 - part2);
    return S;
}
void task9_1(int windSpeed) {
    if (windSpeed >= 64 && windSpeed <= 116)
        printf("Категорія: F0, Частота: 38.9%%\n");
    else if (windSpeed >= 117 && windSpeed <= 180)
        printf("Категорія: F1, Частота: 35.6%%\n");
    else if (windSpeed >= 181 && windSpeed <= 253)
        printf("Категорія: F2, Частота: 19.4%%\n");
    else if (windSpeed >= 254 && windSpeed <= 332)
        printf("Категорія: F3, Частота: 4.9%%\n");
    else if (windSpeed >= 333 && windSpeed <= 418)
        printf("Категорія: F4, Частота: 1.1%%\n");
    else if (windSpeed >= 419 && windSpeed <= 512)
        printf("Категорія: F5, Частота: менше 0.1%%\n");
    else
        printf("Швидкість поза шкалою Фудзіти\n");
}

// Задача 9.2
TempResult task9_2(double t1, double t2, double t3,
                   double t4, double t5, double t6) {
    TempResult result;
    result.celsius    = (t1 + t2 + t3 + t4 + t5 + t6) / 6.0;
    result.fahrenheit = 32.0 + (9.0 / 5.0) * result.celsius;
    return result;
}

// Задача 9.3
int task9_3(unsigned short N) {
    int target = N & 1;
    int count  = 0;
    for (int i = 0; i < 16; i++) {
        count += ((N >> i) & 1) == target ? 1 : 0;
    }
    return count;
}
