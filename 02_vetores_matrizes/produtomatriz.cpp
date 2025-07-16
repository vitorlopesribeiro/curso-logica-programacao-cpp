/* Imprime o produto dos elementos que estão abaixo da diagonal principal */
#include <iostream>
using namespace std;
int main()
{
    int matriz[6][6] = {{2, 5, 7, 0, 3, 4}, 
                        {9, 2, 0, 4, 0, 1}, 
                        {5, 5, 3, 8, 4, 7}, 
                        {7, 2, 5, 7, 8, 4}, 
                        {1, 0, 1, 0, 9, 5}, 
                        {6, 1, 4, 6, 1, 8}};
    int i,j,a=0;
    
    cout << "Matriz excluindo a diagonal principal:" << endl;
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(i>j){
                cout << matriz[i][j] << "\t";
                a += matriz[i][j];
            }else{
                cout << "X" << "\t";
            }
        }
        cout << endl;
    }
    
    cout << "Soma: " << a;

    return 0;
}
