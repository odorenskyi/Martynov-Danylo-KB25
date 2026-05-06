#include <iostream>
#include <cstdlib>
#include <string>
#include "ModulesМартинов.h"

using namespace std;

string getCopyright() {
    return "© Мартинов Данило";
}

string getLogicResult(char a, char b) {
    bool result = (a + 1 == b + 2);
    return result ? "true" : "false";
}

void printValues(long long x, long long y, long long z) {
    double s = s_calculation(x, y, z);

    cout << "x: dec=" << dec << x << "  hex=0x" << hex << x << endl;
    cout << "y: dec=" << dec << y << "  hex=0x" << hex << y << endl;
    cout << "z: dec=" << dec << z << "  hex=0x" << hex << z << endl;
    cout << "S = " << dec << s << endl;
}

int main() {
    system("chcp 1251 > nul");
    long long x, y, z;
    char a, b;

    cout << "Введіть x y z: ";
    cin >> x >> y >> z;
    cout << "Введіть a b: ";
    cin >> a >> b;

    cout << getCopyright() << endl;
    cout << "a+1 == b+2: " << getLogicResult(a, b) << endl;
    printValues(x, y, z);

    return 0;
}
