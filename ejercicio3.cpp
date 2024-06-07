#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Ingrese la cantidad de elementos del arreglo: ";
  cin >> n;

  int arr[n];
  cout << "Ingrese los elementos del arreglo: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "El arreglo es: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}