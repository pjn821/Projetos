// convert + to -plus
// leave & alone


#include <iostream>
#include <cctype> // Biblioteca para funções de caracteres, como isalnum()
using namespace std;

// Função que substitui caracteres que não são letras ou números por '-'
string trocar(string texto) {
    string result = ""; // Armazena o novo texto processado

    // Percorre cada caractere da string
    for (int i = 0; i < texto.length(); i++) {
        if (isalnum(texto[i])) { 
            // Se for letra ou número, mantém o caractere
            result += texto[i];
        }
    // manter &
        else if(texto[i] == '&'){
             result += "&";
        }
    // trocar + por plus
        else if(texto[i] == '+'){
             result += "-plus";
        }

         else {
            // Se não for letra nem número, substitui por '-'
            result += '-';
        }
    }

    return result; // Retorna o texto processado
}

int main() {
    // Array de strings com exemplos de textos
    string s[5] = {
        "Git & Version Control", 
        "Customer Behavior & JavaScript", 
        "No error message in the DOM",
        "Learning the basics of c++"
        // "Learning the basics of c ++a"
    };

    int i = 0; // Variável de controle para o loop

    // Percorre cada string do array e aplica a função trocar
    while (i < 5) {
        cout << trocar(s[i]) << endl; // Imprime a string processada
        i++;
    }

    // Alternativa sem loop 
    // cout << trocar("Git & Version Control") << endl;
    // cout << trocar("Customer Behavior & JavaScript") << endl;
    // cout << trocar("No error message in the DOM") << endl;
}

