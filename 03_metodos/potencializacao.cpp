/* Função recursiva potência */
#include <iostream>
using namespace std;

int potencia(int numero, int expoente){
    if (expoente == 0) {
        return 1;
    }else{
        return numero * potencia(numero , expoente-1);
    }
}

int main()
{
    cout << potencia(5, 5);

    return 0;
}
