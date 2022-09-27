#include<iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"INPUT NILAI A   : "; cin>>a;
		switch (a)
		{
			case 1: cout<<"satu"; break;
			case 2: cout<<"Dua"; break;
			default: cout<<"Bukan 1 atau 2";
		}
	return 0;
}

//Switch itu untuk interger atau char, karena ibarat if/else yang jauh lebih simpel, mungkin agak mirip ternary