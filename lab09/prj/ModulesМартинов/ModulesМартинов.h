#ifndef MODULESМартинов_H_INCLUDED
#define MODULESМартинов_H_INCLUDED



double s_calculation(double x, double y, double z);
struct TempResult {
    double celsius;
    double fahrenheit;
};

// Прототипи нових функцій
void task9_1(int windSpeed);
TempResult task9_2(double t1, double t2, double t3,
                   double t4, double t5, double t6);
int task9_3(unsigned short N);

#endif
