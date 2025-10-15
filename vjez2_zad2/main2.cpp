#include <iostream>
#include "zad2.h"
using namespace std;

int main() {
    Vektor* v = vector_new(2);
    vector_push_back(v, 10);
    vector_push_back(v, 20);

    cout << "Front: " << vector_front(v) << endl;
    cout << "Back: " << vector_back(v) << endl;
    cout << "Size: " << vector_size(v) << endl;
    vector_pop_back(v);
    cout << "Size: " << vector_size(v) << endl;


    vector_delete(v);
    return 0;
}
