#include <iostream>
using namespace std;
void tukar(int *p,int *q,int *r){
	int t;
	t = *r;
	*r = *q;
	*q = *p;
	*p = t;	
}
int main(){
	int a = 1;
	int b = 2;
	int c = 3;
	int d;
	tukar(&a,&b,&c);
    cout << a;
    cout << b;
    cout << c;	
}

