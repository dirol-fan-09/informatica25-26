#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int nr1, nr2, nr3;
	cout<<"Introduceti trei numere: ";
	cin>>nr1>>nr2>>nr3;
	int comp1 = max(nr1,nr2);
	int comp2 = max(nr2,nr3);

	if(comp1 > comp2){
		cout<<"Cel mai mare numar este "<<comp1;
	} else {
		cout<<"Cel mai mare numar este "<<comp2;
	}

	return 0;
}