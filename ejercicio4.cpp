#include <iostream>
using namespace std;

int main() {
  int n, num;
  cout << "Ingrese el tamano del arreglo: ";
  cin >> n;

  int arr[n];
  cout << "Ingrese los elementos del arreglo: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Ingrese el numero entero: ";
  cin >> num;

  int menores = 0, iguales = 0, mayores = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < num) {
      menores++;
    } else if (arr[i] == num) {
      iguales++;
    } else {
      mayores++;
    }
  }
  cout << "Hay " << menores << " numeros menores que " << num << endl;
  cout << "Hay " << iguales << " numeros iguales que " << num << endl;
  cout << "Hay " << mayores << " numeros mayores que " << num << endl;
  return 0;
}