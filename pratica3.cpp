#include <iostream>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"

using namespace std;
using namespace funcoes;

int main() {
    //float x = 5.5, y = 10.15, z = 30.7;
    //cout << "Antes: x = " << x << " y = " << y << endl;
    //trocar(x, y);
    //cout << "Depois : x = " << x << " y = " << y << endl;
    //cout << "Minimo entre " << x << " e " << y << ": " << minimo(x, y) << endl;
    //cout << "Maximo entre " << y << " e " << z << ": " << maximo(y, z) << endl;

    // Exemplo com strings literais
    //const char* strA = "strA";
    //const char* strB = "strB";
    //cout << "Minimo de \"strA\" e \"strB\": " << minimo(strA, strB) << endl;
    //cout << "Maximo de \"strA\" e \"strB\": " << maximo(strA, strB) << endl;

    //Arranjo<int>
    Arranjo<int> arr(10);
    arr.set(4, 5);
    arr.set(7, 15);
    arr.set(8, 22);

    cout << "Array de inteiros:" << endl;
    arr.exibir();

    //Arranjo<float>
    Arranjo<float> arrf(5);
    arrf.set(0, 5.5);
    arrf.set(1, 10.1);
    arrf.set(2, 15.0);
    ;

    Arranjo<Aluno> turma(3);

    turma.set(0, Aluno("Joao", "1234"));
    turma.set(1, Aluno("Maria", "5235"));
    turma.set(2, Aluno("Jose", "2412"));


    turma.exibir();
    try {
        cout << "Elemento fora do limite: " << arr.get(15) << endl << endl;
    } catch (const out_of_range &e) {
        cerr << "Erro: " << e.what() << endl;
    }
    return 0;
}