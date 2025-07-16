#include <iostream>

using namespace std;

// Função para trocar dois elementos
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Implementação do Bubble Sort
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Se nenhum elemento foi trocado, o array já está ordenado
        if (!swapped)
            break;
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {9, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array antes da ordenação: \n";
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    cout << "Array após a ordenação: \n";
    printArray(arr, n);
    
    return 0;
}
