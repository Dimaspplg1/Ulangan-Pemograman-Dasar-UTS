#include <iostream>
using namespace std;

int main (){
	cout<<"========\n"<<endl;
	cout<<"Predikat"<<endl;
	cout<<"========\n"<<endl;
	
	int nilai;
	cout<<"Masukan Nilai = "; cin>> nilai;
	if(nilai>92){
		cout<<"A";
	}
	
	else if(nilai>87){
		cout<<"AB";
	}
	
	else if(nilai>83){
		cout<<"B";
	}
	
	else if(nilai>79){
		cout<<"C";
	}
	
	else{
		cout<<"D";
	}
}
