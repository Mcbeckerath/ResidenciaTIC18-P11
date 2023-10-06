#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        // Trate o caso em que o vetor está vazio ou com tamanho inválido
        cout << "Vetor vazio ou tamanho inválido." << endl;
        return;
    }

    maximo = minimo = vetor[0]; // Inicialize maximo e minimo com o primeiro elemento

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tamanho do vetor inválido." << endl;
        return 1;
    }

    int vetor[n];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int maximo, minimo;

    maxmin(vetor, n, maximo, minimo);

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}
