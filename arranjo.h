#ifndef ARRANJO_H
#define ARRANJO_H

#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Arranjo {
private:
    int tamanho;
    T *items;
public:
    Arranjo(int tam);
    virtual ~Arranjo();
    virtual T get(int idx);
    virtual void set(int idx, const T &item);
    virtual void exibir();
};

template <class T>
Arranjo<T>::Arranjo(int tam) : tamanho(tam) {
    items = new T[tamanho];

    for (int i = 0; i < tamanho; i++) {
        items[i] = T();
    }
}

template <class T>
Arranjo<T>::~Arranjo() {
    delete[] items;
}

template <class T>
T Arranjo<T>::get(int idx) {
    if (idx < 0 || idx >= tamanho)
        throw out_of_range("Indice invalido");
    return items[idx];
}

template <class T>
void Arranjo<T>::set(int idx, const T &item) {
    if (idx < 0 || idx >= tamanho)
        throw out_of_range("Indice invalido");
    items[idx] = item;
}

template <class T>
void Arranjo<T>::exibir() {
    for (int i = 0; i < tamanho; i++) {
        cout << i << ": " << items[i] << endl;
    }
}

#endif // ARRANJO_H
