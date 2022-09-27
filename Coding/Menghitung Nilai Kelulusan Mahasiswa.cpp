#include<iostream>
using namespace std;

 int main ()
 {
 	cout<<"MENGHITUNG NILAI KELULUSAN MAHASISWA \n";
	cout<<"by SIRIUS COMET \n\n";
	
	string nama;
	int tugas, UTS, UAS, Nilai_Akhir;
	
	cout<<"MASUKKAN NAMA ANDA      : "; getline(cin,nama);
	cout<<"MASUKKAN NILAI TUGAS    : "; cin>>tugas;
	cout<<"MASUKKAN NILAI UTS      : "; cin>>UTS;
	cout<<"MASUKKAN NILAI UAS      : "; cin>>UAS;
	cout<<"------------------------------------------- \n";
	cout<<"KEPADA ANANDA "<<nama<<", \n";
	Nilai_Akhir=(tugas+UAS+UTS)/3;
	cout<<"NILAI AKHIR ANDA ADALAH : "<<Nilai_Akhir<<"% \n";
	
	if (Nilai_Akhir<=20)
	{
		cout<<"PREDIKAT                : E \n";
		cout<<"KETERANGAN              : SANGAT KURANG !\n";
	}
	
	else if (Nilai_Akhir<=40)
	{
		cout<<"PREDIKAT                : D \n";
		cout<<"KETERANGAN              : KURANG !\n";
	}
	
	else if (Nilai_Akhir<=60)
	{
		cout<<"PREDIKAT                : C \n";
		cout<<"KETERANGAN              : CUKUP !\n";
	}
	
	else if (Nilai_Akhir<=80)
	{
		cout<<"PREDIKAT                : B \n";
		cout<<"KETERANGAN              : BAIK !\n";
	}
	
	else if (Nilai_Akhir<=100)
	{
		cout<<"PREDIKAT                : A \n";
		cout<<"KETERANGAN              : SANGAT BAIK !\n";
	}
	
	else
	{
		cout<<"Mohon maaf, data input tidak bisa dinilai. Silahkan coba lagi ya.";
	}
	
	return 0;
 }