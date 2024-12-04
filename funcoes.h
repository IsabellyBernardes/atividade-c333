#ifndef FUNCOES_H
#define FUNCOES_H

#include <cstring>

//tambem e possivel colocar classes dentro de namespace
//namespaces ajudam a evitar conflitos de nomes ao agrupar identidades
namespace funcoes {
    template <class T>
    void trocar(T & a, T & b) {
        T temp = a;
        a = b;
        b = temp;
    }

    template <class T>
    T maximo(const T & a, const T & b) {
        return (a > b) ? a : b;
    }

    template <class T>
    T minimo(const T & a, const T & b) {
        return (a < b) ? a : b;
    }

    template <>
    const char* maximo<const char*>(const char* const & a, const char* const & b) {
        return (strcmp(a, b) > 0) ? a : b;
    }

    template <>
    const char* minimo<const char*>(const char* const & a, const char* const & b) {
        return (strcmp(a, b) < 0) ? a : b;
    }
}

#endif // FUNCOES_H
