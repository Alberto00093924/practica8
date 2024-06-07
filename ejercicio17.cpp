#include <iostream>
#include <climits>
using namespace std;

int main() {
  int arr[20];
  int menor = INT_MAX;

  cout << "Ingrese los 20 numeros enteros: ";
  for (int i = 0; i < 20; i++) {
    cin >> arr[i];
    if (arr[i] < menor) {
      menor = arr[i];
    }
  }

  cout << "El menor numero del arreglo es: " << menor << endl;

  return 0;
}