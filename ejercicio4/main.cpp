#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string frase;
    int vocales = 0, consonantes = 0, digitos = 0, espacios = 0;

    cout << "Introduce una frase: ";
    getline(cin, frase);

    for (char c : frase) {
        unsigned char lower_c = static_cast<unsigned char>(tolower(static_cast<unsigned char>(c)));

        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') {
            vocales++;
        } else if (isalpha(lower_c)) {
            consonantes++;
        } else if (isdigit(lower_c)) {
            digitos++;
        } else if (isspace(lower_c)) {
            espacios++;
        }
    }

    cout << "\n--- Resultados ---\n";
    cout << "Vocales: " << vocales << "\n";
    cout << "Consonantes: " << consonantes << "\n";
    cout << "Dígitos: " << digitos << "\n";
    cout << "Espacios: " << espacios << "\n";

    return 0;
}
