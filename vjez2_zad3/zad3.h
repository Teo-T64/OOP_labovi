#ifndef ZAD3_H
#define ZAD3_H

#include <iostream>

float** unesi(int& m, int& n);
void generiraj(float** A, int m, int n, float a, float b);
void ispisi(float** A, int m, int n);
float** transponiraj(float** A, int m, int n);
float** zbroji(float** A, float** B, int m, int n);
float** oduzmi(float** A, float** B, int m, int n);
float** pomnozi(float** A, int m1, int n1, float** B, int m2, int n2);

#endif
