#include <iostream>

using namespace std;

double perhitunganGaji(int golongan, double jamkerja) {
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
		lembur = (jamkerja - 48) * 10000;
	}
	else {
		lembur = 0;
	}
	return gaji * jamkerja + lembur;

}

double totalGaji(int golongan, double jamkerja, double lembur) {
	double totalGaji = perhitunganGaji(golongan, jamkerja);
	return totalGaji + lembur;
}

int main() {

	int golongan;
	int jamkerja;
	string nama;

	// Menginput golongan dan jam kerja
	cout << "Masukkann nama anda: ";
	cin >> nama;
	cout << "Masukkan golongan anda: ";
	cin >> golongan;
	cout << "Masukkan jam kerja anda per minggu: ";
	cin >> jamkerja;

	// Menghitung gaji berdasarkan golongan dan jam kerja
	double totalgaji = perhitunganGaji(golongan, jamkerja);
	int totalgajiInt = static_cast<int>(totalgaji);
	cout << "Total Gaji" << nama << "Per minggu Rp." << totalgajiInt << endl;

	return 0;
}