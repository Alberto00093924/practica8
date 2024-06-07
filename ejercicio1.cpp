#include <iostream>
using namespace std;

int main() {
  int n, sum = 0;
  cout << "Ingrese el tamano del arreglo: ";
  cin >> n;

  int arr[n];
  cout << "Ingrese los elementos del arreglo: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  cout << "La suma de los elementos del arreglo es: " << sum << endl;
  return 0;
}