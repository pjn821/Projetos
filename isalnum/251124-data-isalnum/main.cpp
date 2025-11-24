#include <iostream>
#include <ctime>
#include <iomanip> // put_time
#include <sstream>
using namespace std;

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
            
            if (texto[i-1] == ' ') {
                result += "plus";
            } else {
                result += "-plus";
            }
            if (isalnum(texto[i+1])) {
                result += "-";
            }
            //  c+
            // c-plus
            // c+ a
            // c-plus
        }

         else {
            // Se não for letra nem número, substitui por '-'
            result += '-';
        }
    }

    return result; // Retorna o texto processado
}
string  escreverData(){
  std::time_t timestamp = time(nullptr);
  std::tm* tm_local = localtime(&timestamp);
  std::stringstream ss;
  ss << std::put_time(tm_local, "%y%m%d");
  return ss.str();
}
int main() {
   
    string s[5] = {
        "Git & Version Control", 
        "Customer Behavior & JavaScript", 
        "No error message in the DOM",
        "Learning the basics of c++",
        "Learning the basics of c ++a"
        //Learning-the-basics-of-c--plus-plusa
    };

    int i = 0; // Variável de controle para o loop

    // Percorre cada string do array e aplica a função trocar
    while (i < 5) {
        cout <<escreverData()+"-" << trocar(s[i]) << endl; // Imprime a string processada
        i++;
    }

    // Alternativa sem loop 
    // cout << trocar("Git & Version Control") << endl;
    // cout << trocar("Customer Behavior & JavaScript") << endl;
    // cout << trocar("No error message in the DOM") << endl;
    
    return 0;
}