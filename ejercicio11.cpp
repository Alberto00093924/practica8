#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Ingrese un numero: ";
  cin >> num;

  cout << "Los divisores de " << num << " son: ";
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}