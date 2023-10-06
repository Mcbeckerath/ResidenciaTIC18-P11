#include <iostream>
#include <vector>

using namespace std;

vector<int> encontra_letra( string &texto, char letra, int *tamanho_vetor) {
    vector<int> posicoes;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            posicoes.push_back(i);
        }
    }

    *tamanho_vetor = posicoes.size();
    return posicoes;
}

int main() {
    string texto = "programacao";
    char letra = 'a';
    int tamanho_vetor = 0;

    vector<int> posicoes = encontra_letra(texto, letra, &tamanho_vetor);

    cout << "Posicoes onde a letra '" << letra << "' foi encontrada: ";
    for (int i = 0; i < tamanho_vetor; i++) {
        cout << posicoes[i] << " ";
    }
    cout << endl;
    cout << "Tamanho do vetor: " << tamanho_vetor << endl;

    return 0;
}
