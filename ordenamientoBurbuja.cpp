#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Array original: ";
    imprimirArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array ordenado: ";
    imprimirArray(arr, n);

    return 0;
}
