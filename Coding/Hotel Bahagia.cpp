#include<iostream>
using namespace std;
	
	int main ()
	{
		string nama, sarapan;
		int jenis_kamar, durasi_inap, total_pembayaran_kamar, total_pembayaran_final;
		
		cout<<"PELAYANAN HOTEL BAHAGIA \n";
		cout<<"by SIRIUS COMET \n";
		cout<<"---------------------------------------------------------------------------- \n";
		cout<<"DESKRIPSI JENIS PILIHAN PELAYANAN KAMAR INAP : \n";
		cout<<"1. VVIP       (Rp. 1.000.000/MALAM)\n";
		cout<<"2. VIP        (Rp. 750.000/MALAM) \n";
		cout<<"3. STANDARD   (Rp. 500.000/MALAM) \n";
		cout<<"4. MELATI     (Rp. 250.000/MALAM) \n";
		cout<<"---------------------------------------------------------------------------- \n";
		cout<<"SILAHKAN ISI DATA ANDA \n";
		cout<<"NAMA LENGKAP                               : "; getline(cin, nama);
		cout<<"PILIHAN JENIS KAMAR (1-4)                  : "; cin>>jenis_kamar;
		cout<<"DURASI INAP (Per-MALAM)                    : "; cin>>durasi_inap;
		cout<<"DENGAN SARAPAN (Rp. 50.000/HARI)_(YES/NO)  : "; cin>>sarapan;
		cout<<"---------------------------------------------------------------------------- \n";
		cout<<"TERIMA KASIH PADA "<<nama<<", ATAS PEMESANAN KAMAR DAN PELAYANAN HOTEL BAHAGIA. \n";
			switch (jenis_kamar)
			{
				case 1 : 
					cout<<"JENIS KAMAR ANDA ADALAH : VVIP. \n"; 
					break;
				
				case 2 :
					cout<<"JENIS KAMAR ANDA ADALAH : VIP. \n"; 
					break;
				
				case 3 :
					cout<<"JENIS KAMAR ANDA ADALAH : STANDARD. \n"; 
					break;
					
				case 4 :
					cout<<"JENIS KAMAR ANDA ADALAH : MELATI. \n"; 
					break;
					
				default :
					cout<<"MOHON MAAF, INPURAN JENIS KAMAR ANDA TIDAK VALID. SILAHKAN ISI ULANG."; break;
			}
		cout<<"DENGAN DURASI INAP SELAMA "<<durasi_inap<<" MALAM,";
			if (sarapan == "YES")
			{
				cout<<" SERTA DENGAN SARAPAN. \n";
			}
				else if (sarapan == "yes")
				{
					cout<<" SERTA DENGAN SARAPAN. \n";
				}
			else if (sarapan == "NO")
			{
				cout<<" TANPA SARAPAN. \n";
			}
				else if (sarapan == "no")
				{
					cout<<" TANPA SARAPAN. \n";
				}
		cout<<"TOTAL PEMBAYARAN ANDA ADALAH : Rp. ";
			switch (jenis_kamar)
			{
				case 1 :
					total_pembayaran_kamar = (durasi_inap*1000000);
					break;
					
				case 2 :
					total_pembayaran_kamar = (durasi_inap*750000);
					break;
				
				case 3 :
					total_pembayaran_kamar = (durasi_inap*500000);
					break;
					
				case 4 :
					total_pembayaran_kamar = (durasi_inap*250000);	
					break;			
			}
			
			if (sarapan == "YES")
			{
				total_pembayaran_final = total_pembayaran_kamar+(durasi_inap*50000);
				cout<<total_pembayaran_final;
			}
				else if (sarapan == "yes")
				{
				total_pembayaran_final = total_pembayaran_kamar+(durasi_inap*50000);
				cout<<total_pembayaran_final;
				}
			else if (sarapan == "NO")
			{
				total_pembayaran_final = total_pembayaran_kamar;
				cout<<total_pembayaran_final;
			}
				else if (sarapan == "no")
				{
				total_pembayaran_final = total_pembayaran_kamar;
				cout<<total_pembayaran_final;
				}
	return 0;
	}