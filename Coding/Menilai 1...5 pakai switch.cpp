#include<iostream>
using namespace std;
 
 int main ()
 {
 	cout<<"MENGHITUNG JAWABAN BENAR MENGGUNAKAN SWITCH \n";
 	cout<<"by SIRIUS COMET \n\n";
 	
 	int Jawaban;
 	
 	cout<<"INPUT JAWABANMU    : "; cin>>Jawaban;
 		switch (Jawaban)
 		{
 			case 1 ... 5  : cout<<"\"ANGKA 1-5\""; break;
 			case 6 ... 10 : cout<<"\"ANGKA 6-10\""; break;
 			default : cout<<"\"JANGAN CARI YANG GAK ADA\""; break;
		}
	return 0;
 }