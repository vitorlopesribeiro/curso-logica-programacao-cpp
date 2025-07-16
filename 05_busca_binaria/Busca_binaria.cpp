/******************************************************************************
Busca binaria
*******************************************************************************/
#include <iostream>

using namespace std;

int buscaBinaria(int lista[], int tamanho, int chave){
    int cursorEsquerdo = 0;
    int cursorDireito = tamanho - 1;
    int meio;
    
    while(cursorEsquerdo <= cursorDireito){
        meio = (cursorEsquerdo+cursorDireito)/2;
        if(lista[meio] == chave){
            return meio;
        }if(lista[meio] > chave){
            cursorDireito = meio - 1;
        }else{
            cursorEsquerdo = meio + 1;
        }
    }
    return -1;
}

int main()
{
    int array [] = {2,3,4,6,7,8,9,10,15,17,18};
    int busca = 17;
    int lenght = sizeof(array)/ sizeof(array[0]); // calcula tamanho do array
    int resposta = buscaBinaria(array, lenght, busca);
    cout << "Número: " << busca << endl << "Posição: " << resposta;
    return 0;
}
