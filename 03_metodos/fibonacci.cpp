/* Fibonacci função recursiva */
#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n <= 1){
        return n;
   }else{
        return fibonacci(n-1) + fibonacci(n-2);
        }
    
}

int main()
{
    cout << fibonacci(5);

    return 0;
}
