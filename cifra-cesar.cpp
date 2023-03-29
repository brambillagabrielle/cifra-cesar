#include<iostream>
using namespace std;

int main() {

    char alfabeto[26], alfabetoCifrado[26], entrada[100], saida[100];
    int chave;

    cout<< "Insira a chave para a cifra: ";
    cin>> chave;

    cout<< "\n";
    for (int i = 0; i < 26; i++) {
        alfabeto[i] = 65 + i;
        cout<< alfabeto[i];
    }

    cout<< "\n";
    for (int i = 0; i < 26; i++) {

        alfabetoCifrado[i] = alfabeto[i] + chave;

        if (alfabetoCifrado[i] > 90) {
            alfabetoCifrado[i] = alfabetoCifrado[i] - 26;
        }

        cout<< alfabetoCifrado[i];

    }

    cout<< "\n\n";
    cout<< "Insira uma palavra para ser cifrada: ";
    cin>> entrada;

    cout<< "Palavra cifrada: ";
    int i = 0;
    while (entrada[i] != '\0') {

        saida[i] = toupper(entrada[i]) + chave;
        if (saida[i] > 90) {
            saida[i] = saida[i] - 26;
        }
        cout<< saida[i];
        i++;

    }

    cout<< "\n";

}
