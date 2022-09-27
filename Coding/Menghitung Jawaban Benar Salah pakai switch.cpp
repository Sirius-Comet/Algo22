#include<iostream>
using namespace std;
 
 int main ()
 {
 	cout<<"MENGHITUNG JAWABAN BENAR MENGGUNAKAN SWITCH \n";
 	cout<<"by SIRIUS COMET \n\n";
 	
 	char Jawaban;
 	
 	cout<<"INPUT JAWABANMU    : "; cin>>Jawaban;
 		switch (Jawaban)
 		{
 			case 'a': cout<<"\"BENAR\""; break;
 			case 'A': cout<<"\"BENAR\""; break;
 			default : cout<<"\"SALAH\""; break;
		}
	return 0;
 }