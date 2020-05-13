#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string line;
	ifstream myfile("AliMunawir.txt"); 
while (getline(myfile,line)){
	cout << line << '\n';
}
myfile.close();	
}

