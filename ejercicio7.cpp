#include <iostream>
using namespace std;

int main() {
  int arr[10];

  cout << "Ingrese los elementos del arreglo: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  cout << "El arreglo multiplicado por 10 es: ";
  for (int i = 0; i < 10; i++) {
    arr[i] *= 10;
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}