#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("AliMunawir.txt",ios::app);
    myfile << "saya belajar membuat file";
    myfile.close();
}

