#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int partition(int arr[], int beg, int end) {
    // Seleccione el �ltimo elemento como elemento pivote
    int pivot = arr[end];
    int i = (beg - 1);
    //Mueva los elementos m�s peque�os al lado izquierdo y los m�s grandes al lado derecho
    for (int j = beg; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]); //Mover el elemento pivote a su posici�n correcta en la matriz
    return (i + 1);
}

void quickSort(int arr[], int beg, int end) {

    if (beg < end) {
        int pi = partition(arr, beg, end);
        quickSort(arr, beg, pi - 1); // Elemento de clasificaci�n recursivo en el lado izquierdo de la partici�n
        quickSort(arr, pi + 1, end); // Elemento de clasificaci�n recursiva en el lado derecho de la partici�n
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
    quickSort(arr, 0, n - 1); // Ordenar elementos en orden ascendente
    cout << "Arreglo Ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
