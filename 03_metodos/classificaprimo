/* Classifica se um número é primo ou não retornando 1 ou 0 */
#include <iostream>
using namespace std;

bool verificaPrimo(int num){
    int i,cont = 0;
    
    if(num > 0){
        for(i=num; i>0 ; i--){
        if(num%i == 0){
            cont ++;
        }
    }
    if(cont == 2){
        return true;
    }
    return false;
    }
}

int main()
{
    int valor;
    cout << "Digite um número: ";
    cin >> valor;
    cout << verificaPrimo(valor);
    return 0;
}
