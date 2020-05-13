#include <iostream>
#include <string>
using namespace std;
int main() {
  
  string a;
  int jumlah;
  
  cout<< "Masukkan Sebuah String: ";
  getline(cin, a);
  
  jumlah = a.length();
  cout << "Panjang string adalah : " << jumlah;
}

