#include <iostream>
using namespace std;

int* fibonacci_niz(int n) {
    if (n <= 0) return nullptr;

    int* niz = new int[n]; 

    if (n >= 1) niz[0] = 1;
    if (n >= 2) niz[1] = 1;

    for (int i = 2; i < n; i++)
        niz[i] = niz[i - 1] + niz[i - 2];

    return niz;
}

int main() {
    int n = 7;
    int* niz = fibonacci_niz(n);

    if (niz == nullptr) {
        cout << "n>0!\n";
        return 0;
    }
    for (int i = 0; i < n; i++)
        cout << niz[i] << " ";
    cout << endl;
    delete[] niz;

    return 0;
}
