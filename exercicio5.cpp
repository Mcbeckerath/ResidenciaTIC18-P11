#include <iostream>

using namespace std; 

int insere_meio(int *vetor, int &qtde, int elemento) {
    if (qtde % 2 == 0) { 
        for (int i = qtde - 1; i >= qtde / 2; i--) {
            vetor[i + 1] = vetor[i];
        }
    } else { 
        for (int i = qtde - 1; i > (qtde / 2); i--) {
            vetor[i + 1] = vetor[i];
        }
    }

  
    vetor[qtde / 2] = elemento;
    qtde++;

    return qtde;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;

    cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int elemento = 100;
    insere_meio(vetor, qtde, elemento);

    cout << "Novo tamanho do vetor: " << qtde << endl;
    cout << "Vetor apos a insercao: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
