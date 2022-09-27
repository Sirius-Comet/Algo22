#include<iostream>
using namespace std;
int main ()
{
	string nama, barang;
	int harga_barang, jumlah_barang, total_pembayaran;
	
	cout<<"STRUK PEMBELAJAAN DI APRILMART"<<"\n";
	cout<<"By SIRIUS COMET"<<"\n\n";
	
	cout<<"RINCIAN PEMBELANJAAN"<<"\n";
	cout<<"- NAMA PELANGGAN                      : "; getline(cin,nama);
	cout<<"- NAMA BARANG YANG DIBELI             : "; getline(cin,barang);
	cout<<"- HARGA BARANG YANG DIBELI            : Rp."; cin>>harga_barang;
	cout<<"- JUMLAH BARANG YANG DIBELI           : "; cin>>jumlah_barang;
	cout<<"\n";
	
	total_pembayaran = harga_barang*jumlah_barang;
	cout<<"----------------------------------------------------------------------------"<<"\n\n";
	cout<<"BARANG YANG DIBELI ADALAH "<<barang<<", SEHARGA : Rp."<<harga_barang<<" DENGAN JUMLAH BARANG : "<<jumlah_barang<<"x"<<"\n";
	cout<<"MAKA, TOTAL PEMBAYARAN BELANJA ANDA ADALAH  : Rp."<<total_pembayaran<<"\n\n";
	cout<<"PESAN UNTUK ANDA :"<<"\n";
	
	if (total_pembayaran>500000)
	{
		cout<<"SELAMAT "<<nama<<" ! \"ANDA MENDAPATKAN BONUS 1 BUAH PAYUNG !!!\"";
	}
	else
	{
		cout<<"TERIMA KASIH "<<nama<<" ! \"KARENA SUDAH BERBELANJA, DATANG LAGI YA !!!\"";
	}
	
	cout<<"\n";
	
	return 0;
	
}