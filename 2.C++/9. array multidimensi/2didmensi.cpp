#include<iostream>
using namespace std;
int main(){
    int siswa[2][5];
    cout<<"Masukkan Nilai Siswa: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cout<<"Nilai angka ["<<i<<"]["<<j<<"] = ";cin>>siswa[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cout<<"Nilai Array Siswa["<<i<<"]["<<j<<"] = "<<siswa[i][j]<<endl;
        }
    }
return 0;
}