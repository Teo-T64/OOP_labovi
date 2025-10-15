#include "zad3.h"

int main() {
    int m,n;

    float** A = unesi(m,n);
    std::cout << "A:\n";
    ispisi(A, m, n);

    generiraj(A, m, n, 1.0, 6.0);

    std::cout << "A:\n";
    ispisi(A, m, n);

    float** T = transponiraj(A, m, n);
    std::cout << "\nA transponirano:\n";
    ispisi(T, n, m);

    for (int i = 0; i < m; i++)
        delete[] A[i];
    delete[] A;

    for (int i = 0; i < n; i++)
        delete[] T[i];
    delete[] T;

    return 0;
}
