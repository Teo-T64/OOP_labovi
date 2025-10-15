#include "zad2.h"

Vektor* vector_new(int init_kapacitet) {
    Vektor* vek = new Vektor;
    vek->niz = new int[init_kapacitet];
    vek->size = 0;
    vek->kapacitet = init_kapacitet;
    return vek;
}

void vector_delete(Vektor* vek) {
    delete[] vek->niz;
    delete vek;
}

void vector_push_back(Vektor* vek, int val) {
    if (vek->size >= vek->kapacitet) {
        int novi_kapacitet = vek->kapacitet * 2;
        int* novi_vek = new int[novi_kapacitet];
        for (int i = 0; i < vek->size; ++i)
            novi_vek[i] = vek->niz[i];
        delete[] vek->niz;
        vek->niz = novi_vek;
        vek->kapacitet = novi_kapacitet;
    }
    vek->niz[vek->size++] = val;
}

void vector_pop_back(Vektor* vek) {
    if (vek->size > 0) vek->size--;
}

int vector_front(Vektor* vek) {
    return vek->niz[0];
}

int vector_back(Vektor* vek) {
    return vek->niz[vek->size - 1];
}

int vector_size(Vektor* vek) {
    return vek->size;
}
