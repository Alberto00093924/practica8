#include <iostream>
using namespace std;

int main() {
  int arr[20];
  int num;

  cout << "Ingrese los 20 elementos del arreglo: ";
  for (int i = 0; i < 20; i++) {
    cin >> arr[i];
  }
  cout << "Ingrese un número: ";
  cin >> num;

  bool encontrado = false;
  for (int i = 0; i < 20; i++) {
    if (arr[i] == num) {
      encontrado = true;
      break;
    }
  }
  if (encontrado) {
    cout << "El numero " << num << " se encuentra en el arreglo" << endl;
  } else {
    cout << "El numero " << num << " no se encuentra en el arreglo" << endl;
  }

  return 0;
}