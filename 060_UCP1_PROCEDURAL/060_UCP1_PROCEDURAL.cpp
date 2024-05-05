// UCP 1 Pemograman Dasar Procedural

//1. contoh deklarasi variable. berikan minimal 3 variable dengan tipe data yang berbeda.
// jawaban: int, string, char
//2. contoh minimal 1 impementasi dari conditional statement
// jawaban: if, else
//3. berikan contoh implementasi dari struct
// jawaban: struct mahasiswa
//4. berikan contoh implementasi dari prosedur dan fungsi
// jawaban : void input , float
//5. contoh implementasi dari looping.
// jawaban : do, while

#include <iostream>
using namespace std;

int arr[20];
int n;
void input() {		//procedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; //output ke layar
		cin >> n;	//input dari pengguna
		if (n <= 12) // jika n kurang dari atau sama dengan 70
			break;	//keluar dari loop
		else {		// jika n lebih dari 80
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; // output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {  // Looping dengan i dimulai dari 0 hingga n-1
		cout << "data ke-" << (i + 1) << ": "; //Output ke layar
		cin >> arr[i];				//output dari pengguna

	}
}
struct Nama {
	string Asroni;
	string Lia;
	string joko;
};

struct Status {
	string Diterima;
	string Ditolak;
	int nilai;
};
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j]; // menampilkan array
		if (j < n - 1) {
			cout << " -->";
		}
	}
	cout << endl;
	cout << endl;

	cout << " jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
	cout << endl;
	cout << endl;

}
int main()
{
	int pilihan;

	do
	{
		system("cls");
		cout << "===========================" << endl;
		cout << "MENU" << endl;
		cout << "1. Penjumlahan " << endl;
		cout << "2. Pembagian " << endl;
		cout << "3. Perkalian " << endl;
		cout << "4. Pengurangan " << endl;
		cout << "5. Exit " << endl;
		cout << "Masukan pilihan 1/2/3/4/5/6 = ";
		cin >> pilihan;
