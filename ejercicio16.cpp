#include <iostream>
#include <climits>
using namespace std;

int main() {
  int arr[20];
  int mayor = INT_MIN;

  cout << "Ingrese los 20 numeros enteros: ";
  for (int i = 0; i < 20; i++) {
    cin >> arr[i];
    if (arr[i] > mayor) {
      mayor = arr[i];
    }
  }

  cout << "El mayor numero del arreglo es: " << mayor << endl;

  return 0;
}