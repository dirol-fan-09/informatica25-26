#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Introduceti trei numere: ";
	cin>>a>>b>>c;
	if(a >= b && a >= c){
		cout<<"Cel mai mare: "<<a;
	} else if (b >= a && b >=c){
		cout<<"Cel mai mare: "<<b;
	} else {
		cout<<"Cel mai mare: "<<c;
	}
	return 0;
}