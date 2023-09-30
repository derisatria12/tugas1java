#include <iostream>
using namespace std;
int main() {
	string nama, jenis, aturan;
	double harga;
	char kode;
	cout<<"Masukkan Nama Obat : ";getline(cin,nama);
	cout<<"Masukkan Jenis Obat : ";getline(cin,jenis);
	cout<<"Masukkan Aturan Pakai : ";getline(cin,aturan);
	cout<<"Masukkan Harga : ";cin>>harga;
	cout<<"Masukkan Kode Obat : ";cin>>kode; cin.ignore();
	return 0;
}
