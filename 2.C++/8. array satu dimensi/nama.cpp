#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Masukkan Jumlah Nama : ";cin>>n;
	string nama[n];
	for(int i=0; i<n; i++){
		cout<<"Masukkan nama pada indeks ke- "<<i+1<<" : ";cin>>nama[i];
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<"Nama ke- "<<i+1<<" : "<<nama[i]<<endl;
	}
}
