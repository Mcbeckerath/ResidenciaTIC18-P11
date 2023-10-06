#include <iostream>
using namespace std;

bool eh_primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int conta_primos(int *vet, int qtde) {
    int contador = 0;
    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int qtde = 10;

    int quantidade_primos = conta_primos(vetor, qtde);

    cout << "Quantidade de numeros primos no vetor: " << quantidade_primos << endl;

    return 0;
}
