#include<iostream>
using namespace std;

int main ()
{
	cout<<"MEMASUKAN PILIHAN PEMBELAJARAN \n";
	cout<<"by SIRIUS COMET \n\n";
	
	int Pilihan;
	float a, b, c;
	
	cout<<"CALCULATOR CANGGIH YA GES YA \n";
	cout<<"1. Penjumlahan \n";
	cout<<"2. Pengurangan \n";
	cout<<"3. Perkalian \n";
	cout<<"4. Pembagian \n";
	cout<<"5. Modulus \n";
	cout<<"--------------------------------- \n";
	cout<<"TENTUKAN PILIHAN PEMBELAJARAN ANDA : "; cin>>Pilihan;
	
	switch (Pilihan)
	{
		case 1 : 
			cout<<"Masukan angka pertama : "; cin>>a;
			cout<<"Masukan angkka kedua  : "; cin>>b;
			c = a+b;
			cout<<"Hasil Penjumlahan     : "<<c<<"\n";
		break;
		
		case 2 :
			cout<<"Masukan angka pertama : "; cin>>a;
			cout<<"Masukan angka kedua   : "; cin>>b;
			c = a-b;
			cout<<"Hasil Pengurangan     : "<<c<<"\n";
		break;
		
		case 3 :
			cout<<"Masukan angka pertama : "; cin>>a;
			cout<<"Masukan angka kedua   : "; cin>>b;
			c = a*b;
			cout<<"Hasil Pengurangan     : "<<c<<"\n";
		break;
		
		default :
			cout<<"MASIH DALAM TAHAP PENGEMBANGAN, JADI PILIH 1-3 AJA YA \n";
		break;
	}
	
	return 0;
}