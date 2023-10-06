#include <iostream>

void intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamResultado = tam1 + tam2;
    int resultado[tamResultado];
    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2) {
        resultado[k++] = vet1[i++];
        resultado[k++] = vet2[j++];
    }

    while (i < tam1) {
        resultado[k++] = vet1[i++];
    }

    while (j < tam2) {
        resultado[k++] = vet2[j++];
    }

    std::cout << "Vetor intercalado: ";
    for (int i = 0; i < tamResultado; i++) {
        std::cout << resultado[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int vetor1[] = {1, 3, 5};
    int tam1 = 3;

    int vetor2[] = {2, 4, 6, 8};
    int tam2 = 4;

    intercala(vetor1, tam1, vetor2, tam2);

    return 0;
}

