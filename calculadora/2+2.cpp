#include <iostream> 

int main() {
    char sinal;
    float oper1, oper2, resultado = 0;

    std::cout << "Operadores: + - * /\n";
    std::cout << "Digite o caracter da operacao: ";
    std::cin >> sinal;

    // valida o operador
    while (sinal != '+' && sinal != '-' && sinal != '*' && sinal != '/') {
        std::cout << "Operador invalido! Digite novamente (+ - * /): ";
        std::cin >> sinal;
    }

    // entrada 
    std::cout << "Digite o operador 1: ";
    std::cin >> oper1;

    std::cout << "Digite o operador 2: ";
    std::cin >> oper2;

    // evita divisao por zero
    while (sinal == '/' && oper2 == 0) {
        std::cout << "Divisao por 0 nao e valida. Digite o operador 2 novamente: ";
        std::cin >> oper2;
    }

    // realiza a operação
    switch (sinal) {
        case '+':
            resultado = oper1 + oper2;
            break;
        case '-':
            resultado = oper1 - oper2;
            break;
        case '*':
            resultado = oper1 * oper2;
            break;
        case '/':
            resultado = oper1 / oper2;
            break;
    }

    std::cout << "\nResultado: " << oper1 << " " << sinal << " " << oper2 << " = " << resultado << "\n";
    
}
