#include <iostream>
using namespace std;

int main() {
  int n, product = 1;
  cout << "Ingrese el tamano del arreglo: ";
  cin >> n;

  int arr[n];
  cout << "Ingrese los elementos del arreglo: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    product *= arr[i];
  }
  cout << "El producto de los elementos del arreglo es: " << product << endl;
  return 0;
}