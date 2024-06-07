#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Ingrese un numero: ";
  cin >> num;

  cout << "Los numeros del 0 al 100 divisibles por " << num << " son: ";
  for (int i = 0; i <= 100; i++) {
    if (i % num == 0) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}