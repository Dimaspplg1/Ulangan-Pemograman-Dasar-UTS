#include <iostream>
using namespace std;

int main (){
	int kehadiran,tugas,uts,uas;
	
	cout<<"Masukan Kehadiran = "; cin>> kehadiran;
	cout<<"Masukan Tugas = "; cin>> tugas;
	cout<<"Masukan Nilai UTS = "; cin>> uts;
	cout<<"Masukan Nilai UAS = "; cin>> uas;
	
	int hasil;
	hasil = (kehadiran + tugas + uts + uas)/4;
	cout<<"Hasil = "<<hasil<<endl;
}
