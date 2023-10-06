#include <iostream>
#include <string>

using namespace std;

string caracteres_comuns(string &A, string &B) {
    string C;
    
    for (int i = 0; i < A.length(); i++) {
        for (int j = 0; j < B.length(); j++) {
            if (A[i] == B[j]) {
                bool jaExiste = false;
                for (int k = 0; k < C.length(); k++) {
                    if (C[k] == A[i]) {
                        jaExiste = true;
                        break;
                    }
                }
                if (!jaExiste) {
                    C += A[i];
                }
            }
        }
    }

    return C;
}

int main() {
    string A = "abcdef";
    string B = "bcdegh";

    string C = caracteres_comuns(A, B);

    cout << "Caracteres comuns em A e B: " << C << endl;

    return 0;
}
