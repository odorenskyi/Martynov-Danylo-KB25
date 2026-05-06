#include <iostream>
#include <cstdlib>
#include <cmath>
#include "ModulesМартинов.h"

using namespace std;

int main(){
    system("chcp 1251 > nul");
    double x, y, z, result, expected;

    // Інтерактивний режим
cout << "\n=== Інтерактивний режим ===" << endl;
char choice;
do {
    double x, y, z, expected;
    cout << "Введіть x y z: ";
    cin >> x >> y >> z;


        double result = s_calculation(x, y, z);
double part1 = sqrt(fabs(z - 2 * x));
double part2 = x * sin(pow(x, 2 * z) * y);
 expected = fabs(part1 - part2);

cout << "  Result:   " << result << endl;
cout << "  Expected: " << expected << endl;
cout << "  Status:   "
     << (fabs(result - expected) < 0.0001 ? "passed" : "failed")
     << endl;


    cout << "Продовжити? (y/n): ";
    cin >> choice;
} while (choice == 'y');

    return 0;
}
