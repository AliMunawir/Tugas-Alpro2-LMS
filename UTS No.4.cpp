#include <iostream>
using namespace std;
struct mata_kuliah{
	int nilai_tugas;
	int nilai_mid;
	int nilai_kuis;
	int nilai_UAS;
	char stambuk[30];
};
int n,i,j,k;
void tampilan(struct mata_kuliah mahasiswa[10]){
	for( k = 0;k<n;k++){
	cout << "\ndata mahasiswa = "<<k+1 <<endl;
	cout << "stambuk = ";
	cout << mahasiswa[k].stambuk;
	cout << "\ntugas = ";
	cout << mahasiswa[k].nilai_tugas;
	cout << "\nkuis = ";
	cout << mahasiswa[k].nilai_kuis;
	cout << "\nnilai mid = ";
	cout << mahasiswa[k].nilai_mid;
	cout << "\nnilai UAS = ";
	cout << mahasiswa[k].nilai_UAS <<"\n"<<endl;	
	}
	cout <<"---------------------------------------------------------------------------------------" << endl;
	cout <<"NO\tstambuk\t\tnilai tugas\tnilai kuis\tnilai mid\tnilai uas\n\n";
	cout <<"---------------------------------------------------------------------------------------\n\n";
	for(j = 0;j<n;j++){
	cout <<j+1 <<"\t"<<mahasiswa[j].stambuk<<"\t\t"<<mahasiswa[j].nilai_tugas<<"\t\t"<<mahasiswa[j].nilai_kuis;
	cout<<"\t\t"<<mahasiswa[j].nilai_mid<<"\t\t"<<mahasiswa[j].nilai_UAS<<"\t\t"<<endl;
}
	}
struct mata_kuliah mahasiswa[10];
int main(){
	cout << "stambuk saya = 13020190014";
	cout << "\nmasukkan data = ";
	cin >> n;
	for( i = 0;i<n;i++){
	cout << "data mahasiswa = "<<i+1<<endl;
	cout << "masukkan stambuk = ";
	cin >> mahasiswa[i].stambuk;
	cout << "masukkan nilai tugas = ";
	cin >> mahasiswa[i].nilai_tugas;
	cout << "masukkan kuis = ";
	cin >> mahasiswa[i].nilai_kuis;
	cout << "masukkan nilai mid = ";
	cin >> mahasiswa[i].nilai_mid;
	cout << "masukkan nilai UAS = ";
	cin >> mahasiswa[i].nilai_UAS;	
	}
	tampilan(mahasiswa);
}

