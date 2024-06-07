#include <iostream>
using namespace std;

int main() {
  int n, opcion;
  cout << "Ingrese el tamano del arreglo: ";
  cin >> n;

  int arr[n];
  cout << "Ingrese los elementos del arreglo: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  do {
    cout << "Menu: " << endl;
    cout << "1. Multiplicar" << endl;
    cout << "2. Sumar" << endl;
    cout << "3. Restar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
      case 1:
        cout << "El arreglo multiplicado es: ";
        for (int i = 0; i < n; i++) {
          arr[i] *= 2;
          cout << arr[i] << " ";
        }
        cout << endl;
        break;
      case 2:
        cout << "El arreglo sumado es: ";
        for (int i = 0; i < n; i++) {
          arr[i] += 2;
          cout << arr[i] << " ";
        }
        cout << endl;
        break;
      case 3:
        cout << "El arreglo restado es: ";
        for (int i = 0; i < n; i++) {
          arr[i] -= 2;
          cout << arr[i] << " ";
        }
        cout << endl;
        break;
      case 4:
        cout << "El arreglo dividido es: ";
        for (int i = 0; i < n; i++) {
          arr[i] /= 2;
          cout << arr[i] << " ";
        }
        cout << endl;
        break;
      case 5:
        cout << "Saliendo del programa" << endl;
        break;
      default:
        cout << "Opcion inválida" << endl;
        break;
    }
  } while (opcion != 5);

  return 0;
}