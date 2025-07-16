/*Entre com dois valores e escolha uma opção(menu) de operação basica */
#include <iostream>
using namespace std;

int opMultiplica(int a, int b){
    return a*b;
}
int opAdd(int a, int b){
    return a+b;
}
int opDiv(int a, int b){
    return a/b;
}
int opSub(int a, int b){
    return a-b;
}

int main()
{
    int a,b,op;
    cout << "Digite dois números:";
    cin >> a >> b;
    cout << "Selecione 1: Multiplicação 2: Adição 3: Divisão 4: Subtração" <<"\n";
    cin >> op;
    if(op == 1){
        cout << opMultiplica(a, b) << "\n";
    }if(op == 2){
        cout << opAdd(a,b) << "\n";
    }if(op == 3){
        cout << opDiv(a,b) << "\n";
    }if(op == 4){
        cout << opSub(a,b) << "\n";
    }
    
    return 0;
}
