#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream database;
	database.open("berkasStambukAnda.txt",ios::out);
	database <<"stambuk = \nnama = \nkelas = \ndaftar nilai \n1. tugas = \n2. kuis = \n3. mid = \n4. uas = ";
	database.close();
}

