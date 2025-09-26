#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	cout<<"podaj wiek"<<endl;
	cin>>x;
	cout<<"podaj wiek nastepnej osoby"<<endl;
	cin>>y;
	cout<<"w sumie macie lat: "<<x+y<<endl;
	if(x+y>100){
		cout<<"macie w sumie wiecej niz 100 lat"<<endl;
	}
	else{
		cout<<"macie w sumie mniej lub 100 lat"<<endl;
	}
	if(x>y)
	{
		cout<<"osoba 1 jest starsza"<<endl;
	}else if(y>x){
		cout<<"osoba 2 jest starsza"<<endl;
	}else{
		cout<<"obie osoby sa tego samego wieku"<<endl;
	}
	return 0;
}
