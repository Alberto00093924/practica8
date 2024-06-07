#include <iostream>
#include <string>
using namespace std;

int main() {
  char arr[] = {'T', 'E', 'R', 'M', 'O'};
  string palabras[6];
  int contador = 0;

  cout << "Ingrese 6 palabras: ";
  for (int i = 0; i < 6; i++) {
    cin >> palabras[i];
  }

  for (int i = 0; i < 6; i++) {
    bool encontrado = false;
    for (int j = 0; j < 5; j++) {
      if (palabras[i][0] == arr[j]) {
        encontrado = true;
        break;
      }
    }
    if (!encontrado) {
      contador++;
    }
  }

  cout << "La cantidad de palabras que no estan en el arreglo es: " << contador << endl;

  return 0;
}