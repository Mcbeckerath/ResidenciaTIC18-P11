#include <iostream>

using namespace std;

void ordenarFloats(float &valor1, float &valor2, float &valor3, float &valor4) {
    if (valor1 > valor2) {
        float temp = valor1;
        valor1 = valor2;
        valor2 = temp;
    }
    if (valor1 > valor3) {
        float temp = valor1;
        valor1 = valor3;
        valor3 = temp;
    }
    if (valor1 > valor4) {
        float temp = valor1;
        valor1 = valor4;
        valor4 = temp;
    }
    if (valor2 > valor3) {
        float temp = valor2;
        valor2 = valor3;
        valor3 = temp;
    }
    if (valor2 > valor4) {
        float temp = valor2;
        valor2 = valor4;
        valor4 = temp;
    }
    if (valor3 > valor4) {
        float temp = valor3;
        valor3 = valor4;
        valor4 = temp;
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite quatro numeros float separados por espacos: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenarFloats(num1, num2, num3, num4);

    cout << "Numeros em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;

    return 0;
}
