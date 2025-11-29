#include <iostream>
#include<bitset>
using namespace std;

int binary_to_decimal(string binary){
    int decimal = stoi(binary, nullptr, 2);  //stoi(str, [idx], [base]);
    return decimal; 
}

string decimal_to_binary(int decimal){
    bitset<4> binary(decimal);
    return binary.to_string();
}
int main() {
   cout<< binary_to_decimal("1001")<<endl;
   cout<< decimal_to_binary(9)<<endl;
    return 0; 

}


