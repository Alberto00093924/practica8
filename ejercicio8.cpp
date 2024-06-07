#include <iostream>
using namespace std;

int main() {
  int arr[100];

  for (int i = 0; i < 100; i++) {
    arr[i] = i;
  }
  cout << "El arreglo en forma descendente es: ";
  for (int i = 99; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}