#include<iostream>
using namespace std;

	int main ()
	{
		cout<<"MENGHITUNG BONUS BELANJA \n";
		cout<<"by SIRIUS COMET \n";
		cout<<"------------------------\n";
		
		int total_belanja;
		char member;
		
		cout<<"MASUKKAN TOTAL PEMBELANJAAN : "; cin>>total_belanja;
		cout<<"APAKAH ANDA MEMBER ? (Y/N)  : "; cin>>member;
		
		if (total_belanja > 1000000)
		{
			if (member == 'y'|| member=='Y')
			cout<<"SELAMAT ! ANDA MENDAPATKAN POTONGAN SEBESAR Rp. 35.000 ! \n";
			
			else 
			cout<<"SELAMAT ! ANDA MENDAPATKAN POTONGAN SEBESAR Rp. 20.000 ! \n";
		}
		
		else
		{
			cout<<"TERIMA KASIH SUDAH BERBELANJA, DATANG LAGI YA !";
		}
		
	return 0;
	}