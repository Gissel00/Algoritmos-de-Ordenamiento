#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Ord_Seleccion(int arr[], int n) {
 
    for (int i = 0; i < n-1; i++)  
    {  
        // Encuentra el elemento mínimo para el índice i  
        int min = i;  
        for (int j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;
        // Ponga el elemento en posición ordenada 
        swap(arr[min], arr[i]);  
    }  
}
int main() {

    int n = 6;
    int arr[6] = {5, 3, 4, 2, 1, 6};
    cout << "Arreglo de Entrada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Arreglo de Ordenado: ";
    Ord_Seleccion(arr, n); // Ordenar elementos en orden ascendente
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
