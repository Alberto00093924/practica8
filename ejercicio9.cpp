#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cout << "Ingrese la cantidad de alumnos: ";
  cin >> n;

  string nombres[n];
  cout << "Ingrese los nombres de los alumnos: ";
  for (int i = 0; i < n; i++) {
    cin >> nombres[i];
  }
  cout << "Los nombres de los alumnos son: ";
  for (int i = 0; i < n; i++) {
    cout << "Alumno " << i + 1 << ": " << nombres[i] << endl;
  }

  return 0;
}