#include<iostream>
#include<conio.h>

using namespace std;
int main () 
{
	int jam, menit, detik, sisa;
	
	cout << "Masukkan Jumlah Waktu (Detik) : ";
	cin >> detik;
	
	jam = detik/3600;
	sisa = detik%3600;
	menit = sisa/60;
	detik = sisa%60;
	
	cout << "Hasil Konversi: "<< jam <<" jam :" << menit << " menit :" << detik << " detik";
	
	return 0;
	
}
