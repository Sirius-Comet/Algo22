#include <iostream>
using namespace std;
int main ()
{
	cout<<"MENGHITUNG BERAT BADAN YANG IDEAL YA GES YA"<<"\n";
	cout<<"By SIRIUS COMET"<<"\n\n";
	
	int Berat, Tinggi;
	string Jenis_Kelamin;
	double Berat_Ideal, Selisih;
	
	cout<<"INPUT BERAT BADANMU   :"; cin>>Berat;
	cout<<"INPUT TINGGI BADANMU  :"; cin>>Tinggi;
	cout<<"INPUT JENIS KELAMINMU :"; cin>>Jenis_Kelamin;
	
	if (Jenis_Kelamin=="PRIA")
	{
		Berat_Ideal = Tinggi-100-((Tinggi-100)*10/100);
	}
	else
	{
		Berat_Ideal = Tinggi-100-((Tinggi-100)*15/100);
	}
	
	cout<<"\n";
	cout<<"Berat Badan Idealmu Adalah :"<<Berat_Ideal<<"KG"<<"\n";
	Selisih = Berat-Berat_Ideal;
	
	if (Berat==Berat_Ideal)
	{
		cout<<"YATAA ! YOKATA NE ! Berat badanmu sudah IDEAL !!!"<<"\n";
	} 
	
	else
	{
		if (Berat>Berat_Ideal)
		{
			cout<<"MAAF, berat badanmu masih belum ideal"<<"\n";
		    cout<<"Berat badanmu sudah lebih :"<<Selisih<<"KG"<<"\n";
		}
		else
		{
			cout<<"MAAF, berat badanmu masih belum ideal"<<"\n";
		    cout<<"Berat badanmu sudah kurang :"<<Selisih<<"KG"<<"\n";
		}
		
	}
	
	return 0;
}
