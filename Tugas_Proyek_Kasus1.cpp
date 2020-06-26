#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{  
   awal :
   string nama[10];
   int jum, gol[10],jkerja[10],jlembur[10];
   long nip[50];
   int besar_pajak[10],besar_tunjangan[10],gaji_bersih[10],gaji_tetap[10],upah_lembur[10],total_gaji[10];
	
   cout<<"----------------|----------------------------|-------------------"<<endl;
   cout<<"                  Masukan Jumlah Pegawai : ";
   cin>>jum;
   cout<<"----------------|----------------------------|-------------------"<<endl;
   cout<<endl;
	
   for (int i=1;i<=jum;i++){
    cout<<"                     PEGAWAI KE-"<<i<<endl<<endl;
	cout<<"  Masukkan NIP (No.Induk Pegawai) : ";
	cin>>nip[i];    
	cout<<"  Masukkan Nama                   : ";
	cin>>nama[i];
	cout<<"  Masukkan Golongan               : ";
	cin>>gol[i];
	cout<<"  Masukkan Jumlah Jam Kerja (Jam) : ";
	cin>>jkerja[i];
	
	switch (gol[i]){
		case 1 : 
			gaji_tetap[i]= 500000;
			upah_lembur[i]=5000;
			break;
		case 2 :
			gaji_tetap[i]=300000;
			upah_lembur[i]=3000;
			break;
		case 3 :
			gaji_tetap[i]=250000;
			upah_lembur[i]=2000;
			break;
		case 4 :
			gaji_tetap[i]=100000;
			upah_lembur[i]=1500;
			break;
		case 5 :
			gaji_tetap[i]=50000;
			upah_lembur[i]=100;
			break;
		default :
			gaji_tetap[i]=0;
			upah_lembur[i]=0;	
	}
	
	if (jkerja[i]>173){
	cout<<"masukkan jam lembur (Jam)       : ";
		cin>>jlembur[i];	
	}else{
	     jlembur[i]=0;
	}
	
	besar_tunjangan[i]=0.15*gaji_tetap[i];
	besar_pajak[i]=0.1*gaji_tetap[i]+besar_tunjangan[i];
	total_gaji[i]=gaji_tetap[i]+(jlembur[i]*upah_lembur[i]);
	cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI PEGAWAI CV.XXXI"<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		cout<<"Nama                     : "<<nama[i]<<endl;		
		cout<<"Total Gaji Yang Diterima : "<<"Rp"<<total_gaji[i]<<endl;
		cout<<endl<<endl;	
	}	
	
	cout<<"Ingin kembali ke awal? (y/t)"<<endl;
	   char pilihan;
	   cin>>pilihan;   
       if(pilihan=='y')
       goto awal;
       if(pilihan=='t')
       cout<<"Terima kasih";
getch();
}

