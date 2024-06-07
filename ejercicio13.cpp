#include <iostream>
using namespace std;

int main() {
  int arr[10];

  cout << "Ingrese los 10 elementos del arreglo: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  int opcion;
  cout << "Menu: " << endl;
  cout << "1. Imprimir en orden ascendente" << endl;
  cout << "2. Imprimir en orden descendente" << endl;
  cout << "Ingrese una opcion: ";
  cin >> opcion;

  if (opcion == 1) {
    cout << "El arreglo en orden ascendente es: ";
    for (int i = 0; i < 10; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  } else if (opcion == 2) {
    cout << "El arreglo en orden descendente es: ";
    for (int i = 9; i >= 0; i--) {
      cout << arr[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Opcion invalida" << endl;
  }

  return 0;
}