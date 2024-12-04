#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    string mat;

public:
    Aluno() {}
    Aluno(const char *nome, const char *mat) : nome(nome), mat(mat) {}

    friend class Arranjo<Aluno>;
};


template<>
void Arranjo<Aluno>::set(int idx, const Aluno &aluno) {

    if (idx < 0 || idx >= tamanho) {
        throw out_of_range("Indice invalido");
    }


    items[idx].nome = aluno.nome;
    items[idx].mat = aluno.mat;
}

template<>
void Arranjo<Aluno>::exibir() {

    for (int i = 0; i < tamanho; i++) {
        cout << i << " : " << items[i].mat << " = " << items[i].nome << endl;
    }
}

#endif // ALUNO_H
