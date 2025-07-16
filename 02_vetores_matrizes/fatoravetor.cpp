/*Exibe os fatoriais de cada elemento do vetor*/
#include <iostream>

using namespace std;

int main()
{
    int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
    int fatoriais[10];
    int i,j,a,v;
    
    for(i=0; i<10; i++){
        a=1;
        for(j=vetor[i] ; j>0 ; j--){
            a = a * j;
        }
        fatoriais[i] = a;
    }
    
    for(v=0; v<10 ; v++){
        cout << fatoriais[v] << endl;
    }
    
    
    return 0;
}
