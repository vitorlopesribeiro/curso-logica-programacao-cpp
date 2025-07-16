/* Soma as 3 linhas da matriz [3][5] */
#include <iostream>

using namespace std;

int main()
{
    int matriz[3][5] = {{8, 1, 2, 9, 9},{8, 5, 6, 2, 6},{ 0, 1, 2, 9, 2}};
    int i,j,a;
    
    for(i=0; i<3; i++){
        a = 0;
        for(j=0; j<5; j++){
            a = matriz[i][j] + a;
        }
        cout << "A soma da linha" << i+1 << "=" << endl;
        cout << a << endl;
    }

    return 0;
}
