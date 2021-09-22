#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Ord_Insercion(int arr[], int n) {

    for (int i = 1; i < n; i++) 
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            int key = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = key;
            j--;
        }
    }
}

int main() {

    int n = 5;
    int arr[5] = {5, 3, 4, 2, 1};
    cout << "Arreglo de entrada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    Ord_Insercion(arr, n); // Ordenar elementos en orden ascendente
    cout << "Arreglo Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
