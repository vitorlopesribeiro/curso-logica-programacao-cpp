/* Soma da diagonal principal da matriz */
#include <iostream>
using namespace std;

int main()
{
    int matriz[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j, a=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                a = matriz[i][j] + a;
            }
        }
    }
    
    cout << a;

    return 0;
}
