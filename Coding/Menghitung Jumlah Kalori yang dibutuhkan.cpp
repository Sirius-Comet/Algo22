#include <iostream>
using namespace std;
int main ()
{
	cout<<"MENGHITUNG JUMLAH KALORI YANG DIBUTUHKAN YA GES YA"<<"\n";
	cout<<"By SIRIUS COMET"<<"\n\n";
	
	int Berat, Tinggi, Umur;
	string Jenis_Kelamin;
	double Kalori;
	
	cout<<"INPUT BERAT BADANMU   :"; cin>>Berat;
	cout<<"INPUT TINGGI BADANMU  :"; cin>>Tinggi;
	cout<<"INPUT JENIS KELAMINMU :"; cin>>Jenis_Kelamin;
	cout<<"INPUT USIAMU			 :"; cin>>Umur;
	
	if (Jenis_Kelamin=="PRIA" or "LAKI-LAKI")
	{
		Kalori = 66.5+(13.75*Berat)+(5.003*Tinggi)-(6.75*Umur);
	}
	else
	{
		Kalori = 655.1+(9.563*Berat)+(1.850*Tinggi)-(4.676*Umur);
	}
	
	cout<<"\n";
	cout<<"KALORI YANG TUBUH KAMU BUTUHKAN :"<<Kalori<<"kkal"<<"\n";

	return 0;
}
