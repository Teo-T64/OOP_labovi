#ifndef VEK_H
#define VEK_H

struct Vektor {
    int* niz;
    int kapacitet;
    int size;
};

Vektor* vector_new(int init_kapacitet);
void vector_delete(Vektor* vek);
void vector_push_back(Vektor* vek, int val);
void vector_pop_back(Vektor* vek);
int vector_front(Vektor* vek);
int vector_back(Vektor* vek);
int vector_size(Vektor* vek);

#endif
