#include<iostream>
using namespace std;
int main() {
	long long int id;
	string nama, alamat;
	cout<<"Masukkan Nomor ID : ";cin>>id; cin.ignore();
	cout<<"Masukkan Nama : ";getline(cin, nama);
	cout<<"Masukkan Alamat : ";getline(cin, alamat);
	return 0;
}
