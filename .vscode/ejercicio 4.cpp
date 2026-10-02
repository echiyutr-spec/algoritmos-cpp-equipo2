#include <iostream>
#include <string>
#include <cctype> // Para funciones como tolower, isalpha, isdigit, isspace

using namespace std;

int main() {
    string frase;
    int vocales = 0, consonantes = 0, digitos = 0, espacios = 0;

    // Leer la frase completa incluyendo espacios
    cout << "Introduce una frase: ";
    getline(cin, frase);

    // Recorrer cada carácter de la cadena
    for (char c : frase) {
        char lower_c = tolower(c); // Convertir a minúscula para facilitar la validación

        // Verificar si es vocal
        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') {
            vocales++;
        } 
        // Verificar si es una letra alfabética (por ende, consonante si no pasó el filtro de vocales)
        else if (isalpha(lower_c)) {
            consonantes++;
        } 
        // Verificar si es un dígito (0-9)
        else if (isdigit(c)) {
            digitos++;
        } 
        // Verificar si es un espacio en blanco
        else if (isspace(c)) {
            espacios++;
        }
    }

    // Mostrar los resultados
    cout << "\n--- Resultados ---\n";
    cout << "Vocales: " << vocales << "\n";
    cout << "Consonantes: " << consonantes << "\n";
    cout << "Dígitos: " << digitos << "\n";
    cout << "Espacios: " << espacios << "\n";

    return 0;
}