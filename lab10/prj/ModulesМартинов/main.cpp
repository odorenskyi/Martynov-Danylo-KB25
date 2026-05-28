#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include "ModulesÌàðòèíîâ.h"

double s_calculation(double x, double y, double z) {
    double part1 = sqrt(fabs(z - 2 * x));
    double part2 = x * sin(pow(x, 2 * z) * y);
    return fabs(part1 - part2);
}

static const char* POEM =
    "Äî ùàñòÿ íå ïóñêàº ë³íîù³â îðàâà "
    "Ó ÷³ì âîíî í³õòî íå çíàº äî ïóòòÿ "
    "Íàâ÷èòèñü ðàä³ñíî ðîáèòè êîæíó ñïðàâó "
    "Íàéïåðøå ïðàâèëî ùàñëèâîãî æèòòÿ";

// Ãîëîñí³ ó Windows-1251
static const char* VOWELS = "àåºè³¿îóþÿÀÅªÈ²¯ÎÓÞß";

int countVowels(const char* w) {
    int n = 0;
    for (int i = 0; w[i]; i++)
        if (strchr(VOWELS, w[i])) n++;
    return n;
}

int countConsonants(const char* w) {
    // Âñ³ óêðà¿íñüê³ ë³òåðè ó Windows-1251
    const char* ALL = "àáâã´äåºæçè³¿éêëìíîïðñòóôõö÷øùüþÿÀÁÂÃ¥ÄÅªÆÇÈ²¯ÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÜÞß";
    int total = 0, vowels = 0;
    for (int i = 0; w[i]; i++) {
        if (strchr(ALL, w[i])) {
            total++;
            if (strchr(VOWELS, w[i])) vowels++;
        }
    }
    return total - vowels;
}

void task10_1(const char* in, const char* out) {
    char w[256] = "";
    FILE* f = fopen(in, "r");
    if (f) { fscanf(f, "%255s", w); fclose(f); }
    FILE* o = fopen(out, "w");
    if (!o) return;
    fprintf(f, "Ðîçðîáíèê: Ìàðòèíîâ Äàíèëî, ÖÍÒÓ, Êðîïèâíèöüêèé, Óêðà¿íà, 2026\n");
    fprintf(o, "Ñëîâî: %s\n", w);
    fprintf(o, "Ãîëîñíèõ: %d\n", countVowels(w));
    fprintf(o, "Ó êðàïëèíö³: %s\n", strstr(POEM, w) ? "ÒÀÊ" : "Í²");
    fclose(o);
}

void task10_2(const char* in, const char* out) {
    char w[256] = "";
    FILE* f = fopen(in, "r");
    if (f) { fscanf(f, "%255s", w); fclose(f); }
    FILE* o = fopen(out, "a");
    if (!o) return;
    char buf[64];
    time_t now = time(NULL);
    strftime(buf, sizeof(buf), "%d.%m.%Y %H:%M:%S", localtime(&now));
    fprintf(o, "\nÏðèãîëîñíèõ: %d\n", countConsonants(w));
    fprintf(o, "Äàòà é ÷àñ: %s\n", buf);
    fclose(o);
}

void task10_3(double x, double y, double z, int b, const char* out) {
    FILE* o = fopen(out, "a");
    if (!o) return;
    fprintf(o, "\ns_calculation(%.2f,%.2f,%.2f)=%.4f\n",
            x, y, z, s_calculation(x, y, z));
    fprintf(o, "b=%d ó äâ³éêîâîìó: ", b);
    if (b == 0) { fprintf(o, "0"); }
    else {
        char tmp[33] = {0}; int pos = 31;
        unsigned int ub = (unsigned int)b;
        while (ub > 0) { tmp[pos--] = '0' + (ub % 2); ub /= 2; }
        fprintf(o, "%s", tmp + pos + 1);
    }
    fprintf(o, "\n");
    fclose(o);
}
