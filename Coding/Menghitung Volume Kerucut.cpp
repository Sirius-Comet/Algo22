#include <iostream>
using namespace std;
int main ()
{
	cout<<"MENGHITUNG VOLUME KERUCUT"<<endl;
	cout<<"By SIRIUS COMET"<<endl<<endl;
	double jari_jari, tinggi, volume;

	cout<<"INPUT NILAI JARI-JARI :"; cin>>jari_jari;
	cout<<"INPUT NILAI TINGGI    :"; cin>>tinggi;
	volume=(3.14*jari_jari*jari_jari*tinggi/3);
	cout<<""<<endl;
	
	cout<<"VOULME KERUCUT :"<<volume;
	
	return 0;
}
