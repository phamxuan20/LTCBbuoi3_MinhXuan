#include <iostream>
using namespace std;
int main() {
  int so;
  int soTemp;
  int tong = 0;
  cout << "Nhap so: ";
  cin >> so;
  soTemp = so;
  while (soTemp != 0) {
    tong += soTemp % 10;
    soTemp /= 10;
  }
  cout << "Tong cac chu so cua so " << so << " la " << tong << endl;
  return 0;
}