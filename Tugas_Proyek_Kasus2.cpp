#include <iostream> 
#include <string.h>

using namespace std;
int main()
{  
   awal :
  
   long int harga_buku[10],denda[10];
   char nbuku[50],buku_hilang;
   int a,jml_buku,id_buku[10],lama_peminjaman[10];
   string nama_peminjam;
   
   cout<<"----------------|-----------------------|-------------------\n";
   cout<<"                  Program Meminjam Buku\n";
   cout<<"----------------|-----------------------|--------------------\n\n";
   cout<<"____________________________________________\n";
   cout<<" | Masukan Jumlah Buku  : ";
   cin>>jml_buku;
   cout<<" | Masukkan nama peminjam :";
   cin>>nama_peminjam;
   cout<<"____________________________________________\n\n\n";
   cout<<" | Buku yang tersedia : "<<endl;
   cout<<"____________________________________________\n";
   cout<<" | ID Buku|          Nama Buku             |\n";
   cout<<" -------------------------------------------\n";
   cout<<" |    1   | Desain Media Interaktif        |\n";
   cout<<" |    2   | Teknik Pengelahan Audio & Video|\n";
   cout<<" |    3   | Sistem Operasi                 |\n";
   cout<<" |    4   | Desain Grafis                  |\n";
   cout<<" -------------------------------------------\n";
   cout<<endl;
   
   cout<< "jika meminjam buku lebih dari 5 hari denda 1.000 perhari ";
 
   
   for (int i=1;i<=jml_buku;i++){
    cout<<" Buku ke- "<<i<<endl;
	cout<<" Masukkan ID Buku (1/2/3/4)   : ";
	cin>>id_buku[i]; 
	cout<<" Lama waktu Peminjaman (hari): ";
	cin>>lama_peminjaman[i];
	cout<<endl;
	
	switch (id_buku[i]){
    case 1 :
    harga_buku[i]=90000;
    	
    break;
    case 2 :
    harga_buku[i]=70000;
    
    break;
    case 3 :
    harga_buku[i]=100000;
    
    break;
    case 4 :
    harga_buku[i]=150000;
    
    break;
    default :
    	cout<<"ID buku yang anda masukkan tidak tersedia"<<endl;
    	cout<<"Silahkan masukkan kembali "<<endl;
    	goto awal;
    }
		   	
	
    if((lama_peminjaman>0)&&(lama_peminjaman[i]<5))
{
denda[i]=0;
}
else
{
denda[i]=1000*(lama_peminjaman[i]-5);
}
	}

cout<<" Nama peminjam                  : "<<nama_peminjam<<endl;
	for (int i=1;i<=jml_buku;i++){
		cout<<endl;
		cout<<"Buku ke-"<<i<<endl;
cout<<" Buku hilang ?(y/t)             : ";cin>>buku_hilang;
if(buku_hilang=='y'){
	cout<<"Harga mengganti buku yang hilang : Rp."<<harga_buku[i]<<endl;
	system("exit");
}if(buku_hilang=='t'){
	cout<<" Terima Kasih Telah Menjaga Buku"<<endl;
	system("exit");
}
else buku_hilang=0;
cout<<" Lama Peminjaman                : "<<lama_peminjaman[i]<<" Hari"<<endl;
cout<<" Denda                          : Rp."<<denda[i]<<endl;
}

	cout<<" Ingin mengulang? (y/t)"<<endl;      
       char pilihan;
	   cin>>pilihan;
       if(pilihan=='y')
       goto awal;
       if(pilihan=='t')
       cout<<" Terima kasih";
       
}

