#include<iostream>
using namespace std;
int main(){
	string judul, pengarang, penerbit;
	int tahun;
	char kode;
	cout<<"Masukkan Kode Buku : ";cin>>kode; cin.ignore();
	cout<<"Masukkan Judul Buku : ";getline(cin,judul);
	cout<<"Masukkan Pengarang Buku : ";getline(cin,pengarang);
	cout<<"Masukkan Penerbit Buku : ";getline(cin,penerbit);
	cout<<"Masukkan Tahun Terbit : ";cin>>tahun;
	return 0;
}
