#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Burbuja(int arr[], int n);
int main(int argc, char** argv) {
	
	int n = 5;
    int arr[5] = {5, 3, 4, 2, 1};
    
    cout << "Arreglo de entrada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    Burbuja(arr, n); // Ordenar elementos en orden ascendente
    cout << "Arreglo en Orden Ascendente: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
	return 0;
}

void Burbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
