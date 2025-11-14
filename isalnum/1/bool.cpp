// #include <iostream>
// using namespace std;

// int main() {
//     char lista[] = {'c', '9', '-', '&', '!'}; 
//     int i = 0;

//     while (lista[i] != '!') {
//         cout << isalnum(lista[i]) << endl;
//         i++;
//     }
// }

#include <iostream>
#include <cctype> // Biblioteca que contém funções para manipulação de caracteres, como isalnum()
using namespace std;

int main() {
    // Cria um array de 4 caracteres com diferentes tipos: letra, número, símbolo e caractere especial
    char lista[4] = {'c', '9', '_', '&'}; 
    
    int i = 0; // Variável de controle para percorrer o array

    // Loop que percorre cada elemento do array
    while (i < 4) {
        // isalnum() verifica se o caractere é alfanumérico (letra ou número)
        // cout imprime >=1 se for alfanumérico e 0 se não for
        cout << isalnum(lista[i]) << endl;
        i++; // Avança para o próximo elemento do array
    }
}
