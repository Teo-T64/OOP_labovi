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
            std::cout << "A[" << i << "][" << j << "] = ";
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
