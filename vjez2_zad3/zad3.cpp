#include "zad3.h"
#include <iomanip>

float** unesi(int& m, int& n) {
    std::cout << "Unesite broj redaka: ";
    std::cin >> m;
    std::cout << "Unesite broj stupaca: ";
    std::cin >> n;

    float** A = new float*[m];
    for (int i = 0; i < m; i++)
        A[i] = new float[n];
    std::cout << "Unesite elemente matrice:(" << '\n';
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            std::cout << "[" << i << "][" << j << "] = ";
            std::cin >> A[i][j];
        }

    return A;
}

void generiraj(float** A, int m, int n, float a, float b) {
    int size = m * n;
    float korak = (b - a) / (size - 1);
    float vrijednost = a;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            A[i][j] = vrijednost;
            vrijednost += korak;
        }
}

void ispisi(float** A, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            std::cout << std::setw(10) << std::fixed << std::setprecision(4) << A[i][j];
        std::cout << std::endl;
    }
}

float** transponiraj(float** A,int m, int n) {
    float** T = new float*[n];
    for (int i = 0; i < n; i++)
        T[i] = new float[m];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            T[j][i] = A[i][j];

    return T;
}

float** zbroji(float** A, float** B, int m, int n) {
    float** C = new float*[m];
    for (int i = 0; i < m; i++)
        C[i] = new float[n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];

    return C;
}

float** oduzmi(float** A, float** B, int m, int n) {
    float** C = new float*[m];
    for (int i = 0; i < m; i++)
        C[i] = new float[n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];

    return C;
}

float** pomnozi(float** A, int m1, int n1, float** B, int m2, int n2) {
    if (n1 != m2) {
        return nullptr;
    }

    float** C = new float*[m1];
    for (int i = 0; i < m1; i++)
        C[i] = new float[n2];

    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n2; j++) {
            C[i][j] = 0.0f;
            for (int k = 0; k < n1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    return C;
}