#include <iostream>

using namespace std;

double perhitunganGaji(int golongan,int jamkerja){
	double gaji, lembur;

	switch (golongan)
	{
	case 1:
		gaji = 25000;
		break;
	case 2:
		gaji = 35000;
		break;
	case 3:
		gaji = 50000;
		break;
	default:
		cout << "Golongan Tidak Ada!!";
		return -1;
	}
	if (jamkerja > 48) {
		lembur = (jamkerja - 48) * 10000; // Tarif lembur adalah 200/jam
		jamkerja = 48;
	}
	else {
		lembur = 0;
	}
	gaji += lembur; 
	return gaji;

}

int main() {

	int golongan;
	int jamkerja;
	int nama;

	// Menginput golongan dan jam kerja
	cout << "Masukkann nama anda: " ;
	cin >> nama;
	cout << "Masukkan golongan anda: " ;
	cin >> golongan; 
	cout << "Masukkan jam kerja anda per minggu: " ;
	cin >> jamkerja;

	// Menghitung gaji berdasarkan golongan dan jam kerja
	double gaji = perhitunganGaji(golongan, jamkerja);
	if (gaji != -1) {
		cout << "Total Gaji"<< nama <<"Per minggu Rp." << gaji << endl;
	}

	return 0;
}
