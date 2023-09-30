#include<iostream>
using namespace std;
int main() {
	string nama,harga; 
	int jumlah;
	cout<<"Masukkan Produk yang ingin dibeli : ";getline(cin,nama);
	cout<<"Masukkan Jumlah produk yang ingin dibeli : ";cin>>jumlah;
	cout<<"Masukkan Harga : ";cin>>harga;cin.ignore();
	cout<<"Masukkan Produk yang ingin dibeli : ";getline(cin,nama);
	return 0;
}
