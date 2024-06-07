#include <iostream>
using namespace std;

int main() {
  char arr[20];

  cout << "Ingrese los 20 caracteres del arreglo: ";
  for (int i = 0; i < 20; i++) {
    cin >> arr[i];
  }

  char arrDesc[20];
  for (int i = 0; i < 20; i++) {
    arrDesc[i] = arr[19 - i];
  }

  cout << "El arreglo en forma descendente es: ";
  for (int i = 0; i < 20; i++) {
    cout << arrDesc[i] << " ";
  }
  cout << endl;

  return 0;
}