#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream plik("dane.txt");
	if(!plik.is_open()){
	cout<<"nie da sie otworzyc pliku"<<endl;
	return 1;
	}
	int liczba;
	int suma =0;
	while(plik>>liczba){
	suma += liczba;
	}
	plik.close();
	cout<<"suma liczb to:"<<suma<<endl;
	return 0;
	}
