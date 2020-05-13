#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream mhsfile;
    mhsfile.open("datamhs.txt",ios::out);
    mhsfile << "stambuk = 13020190014\nnama = Ali Munawir\nKelas = A1";
    mhsfile.close();
}

