#include <iostream>
using namespace std;
	int a = 2;
int deret(int t){
	if (t==0||t==1){
		return (2);
	}else{
		return  (a+deret(t-1));
	}
}
int main(){
	int jumlah=0;
	for (int i =1;i<=5;i++){
		jumlah = jumlah+deret (i) ;
	}
	cout << jumlah;
	return 0;
}

