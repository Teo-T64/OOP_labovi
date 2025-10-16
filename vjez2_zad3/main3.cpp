#include "zad3.h"

int main() {
    int m,n,m1,n1;

    float** A = unesi(m,n);
    float** B = unesi(m1,n1);
    std::cout << "A:\n";
    ispisi(A, m, n);
    std::cout << "B:\n";
    ispisi(B,m1,n1);
    if (m == m1 && n == n1) {
        float** Zbroj = zbroji(A, B, m, n);
        float** Oduz = oduzmi(A, B, m, n);

        std::cout << "\nA + B:\n";
        ispisi(Zbroj, m1, n1);
        std::cout << "\nA - B:\n";
        ispisi(Oduz, m1, n1);

        for (int i = 0; i < m; i++)
            delete[] Zbroj[i];
        delete[] Zbroj;

        for (int i = 0; i < m; i++)
            delete[] Oduz[i];
        delete[] Oduz;

    } else {
        std::cout << "\nMatrice moraju imati iste dimenzije!\n";
    }
    float** Mnoz = pomnozi(A, m, n, B, m1, n1);
    if (Mnoz != nullptr) {
        std::cout << "\nA * B:\n";
        ispisi(Mnoz, m1, n1);
        for (int i = 0; i < m1; i++)
            delete[] Mnoz[i];
        delete[] Mnoz;
    }


    generiraj(A, m, n, 1.0, 6.0);

    std::cout << "A:\n";
    ispisi(A, m, n);

    float** T = transponiraj(A, m, n);
    std::cout << "\nA transponirano:\n";
    ispisi(T, n, m);

    for (int i = 0; i < m; i++)
        delete[] A[i];
    delete[] A;
    
    for (int i = 0; i < m1; i++)
        delete[] B[i];
    delete[] B;

    for (int i = 0; i < n; i++)
        delete[] T[i];
    delete[] T;

    return 0;
}

