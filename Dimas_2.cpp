#include <iostream>
using namespace std;

int main (){
	
	cout<<"Nilai UTS dan UAS"<<endl;
	
	cout<<"Masukan Nilai UTS = ";
	int uts;
	cin>> uts;
	
	cout<<"Masukan Nilai UAS = ";
	int uas;
	cin>> uas;
	
	int hasil;
	hasil = (uts + uas) / 2;
	cout<<"Hasil Nilai UTS dan UAS = "<<hasil<<endl;
}
