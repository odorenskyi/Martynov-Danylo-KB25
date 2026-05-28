#include <string>
#include <fstream>
#ifndef MODULESÌàğòèíîâ_H_INCLUDED
#define MODULESÌàğòèíîâ_H_INCLUDED



double s_calculation(double x, double y, double z);
struct TempResult {
    double celsius;
    double fahrenheit;
};
void task10_1(const char* inputFile, const char* outputFile);
void task10_2(const char* inputFile, const char* outputFile);
void task10_3(double x, double y, double z, int b, const char* outputFile);

int countVowels(const char* word);
int countConsonants(const char* word);

#endif
