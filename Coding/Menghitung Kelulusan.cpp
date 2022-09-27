#include <iostream>
using namespace std;

int main ()
{
	cout<<"CALCULATING PRESENTAGE OF PASSING THE SEMESTER \n";
	cout<<"by SIRIUS COMET \n\n";
	
	int nilai_UTS, nilai_UAS;
	double nilai_Kelulusan;
	
	cout<<"ENTER YOUR MID SEMESTER SCORE           : "; cin>>nilai_UTS;
	cout<<"ENTER YOUR FINAL SEMESTER SCORE         : "; cin>>nilai_UAS;
	
	nilai_Kelulusan = (nilai_UTS+nilai_UAS)/2;
	cout<<"YOUR PRESENTAGE OF PASSING THE SEMESTER : "<<nilai_Kelulusan<<"%";
	cout<<"\n\n";
	
	cout<<"DESCRIPTION : \n";
	(nilai_Kelulusan >= 60) ? (cout<<"\"CONGRATULATION ! YOU PASS THE SEMESTER, KEEP IT UP !!!\"") : 
	(cout<<"\"IT SEEMS YOU MAY NEED TO TRY AGAIN BETTER NEXT TIME, BUT HEY IT'S NOT THE END OF THE WORLD.\"");
	cout<<"\n";
	
	return 0;
}