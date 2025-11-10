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
#include <cctype> // para isalnum()
using namespace std;

int main() {
    char lista[4] = {'c', '9', '_', '&'}; 
    int i = 0;

    while (i<4) {
        cout << isalnum(lista[i]) << endl;
        i++;
    }

}