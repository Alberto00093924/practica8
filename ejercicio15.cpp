#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Ingrese la cantidad de caracteres: ";
  cin >> n;

  char arr[n];
  cout << "Ingrese los caracteres: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
  for (int i = 0; i < n; i++) {
    switch (arr[i]) {
      case 'a':
        aCount++;
        break;
      case 'e':
        eCount++;
        break;
      case 'i':
        iCount++;
        break;
      case 'o':
        oCount++;
        break;
      case 'u':
        uCount++;
        break;
    }
  }

  cout << "La vocal 'a' se repite " << aCount << " veces" << endl;
  cout << "La vocal 'e' se repite " << eCount << " veces" << endl;
  cout << "La vocal 'i' se repite " << iCount << " veces" << endl;
  cout << "La vocal 'o' se repite " << oCount << " veces" << endl;
  cout << "La vocal 'u' se repite " << uCount << " veces" << endl;

  return 0;
}