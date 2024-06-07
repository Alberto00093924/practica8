#include <iostream>
using namespace std;

int main() {
  int arr1[10], arr2[10], arrUni[20];

  cout << "Ingrese los 10 elementos del primer arreglo: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr1[i];
  }

  cout << "Ingrese los 10 elementos del segundo arreglo: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr2[i];
  }

  for (int i = 0; i < 10; i++) {
    arrUni[i] = arr1[i];
  }

  for (int i = 0; i < 10; i++) {
    arrUni[i + 10] = arr2[i];
  }

  cout << "El arreglo unificado es: ";
  for (int i = 0; i < 20; i++) {
    cout << arrUni[i] << " ";
  }
  cout << endl;

  return 0;
}