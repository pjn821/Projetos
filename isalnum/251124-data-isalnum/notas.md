## tem 3 partes 

### descobrir como colocar no formato yymmdd

 ````c++
#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    // 1. Obter o tempo atual
    std::time_t tempo_atual = std::time(nullptr);
    
    // 2. Converter para a estrutura tm local
    std::tm* tm_local = std::localtime(&tempo_atual);
    
    // 3. Imprimir diretamente no formato YYMMDD
    std::cout << std::put_time(tm_local, "%y%m%d") << std::endl;
    
    return 0;
}
 ````

### como atribuir a uma variavel

````c++
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream> // add 

int main() {
    // 1. Obter o tempo atual
    std::time_t tempo_atual = std::time(nullptr);
    stringstream ss;
    // 2. Converter para a estrutura tm local
    std::tm* tm_local = std::localtime(&tempo_atual);
    
    // 3. Imprimir diretamente no formato YYMMDD
    std::cout << std::put_time(tm_local, "%y%m%d") << std::endl;
    ss << std::put_time(tm_local, "%y%m%d");
    std::string yymmdd = ss.str();
    std::cout << yymmdd  << std::endl;
    return 0;
}
 ````

### como integrar no codigo isalnum