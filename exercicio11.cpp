#include <iostream>
#include <string>

using namespace std;


string codificar(const string &entrada) {
    string resultado = entrada;

    for (char &caracter : resultado) {
        if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')) {
            if (caracter == 'Z') {
                caracter = 'A'; 
            } else if (caracter == 'z') {
                caracter = 'a'; 
            } else {
                caracter++;
            }
        }
    }

    return resultado;
}


string decodificar(string &entrada) {
    string resultado = entrada;

    for (char &caracter : resultado) {
        if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')) {
            if (caracter == 'A') {
                caracter = 'Z'; 
            } else if (caracter == 'a') {
                caracter = 'z'; 
            } else {
                caracter--;
            }
        }
    }

    return resultado;
}

int main() {
    string texto = "Estruturas de Dados";

    string texto_codificado = codificar(texto);
    string texto_decodificado = decodificar(texto_codificado);

    cout << "Texto original: " << texto << endl;
    cout << "Texto codificado: " << texto_codificado << endl;
    cout << "Texto decodificado: " << texto_decodificado << endl;

    return 0;
}
