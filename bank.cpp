#include <iostream> //bank thing inspired from an exercise we had to do
#include <cmath>
using namespace std;

void MenuThing(){
	cout<<"What operation do you desire? (1 - deposit sum; 2 - withdraw sum): ";
	int depwit;
	cin>>depwit;
	switch(depwit){
	case 1:
		cout<<"Desired amount?: ";
		int am1;
		cin>>am1;
		cout<<"You have deposited "<<am1<<" usd into your account";
		break;
	case 2:
		cout<<"Desired amount?: ";
		int am2;
		cin>>am2;
		cout<<"You have withdrawn "<<am2<<" usd from your account";
		break;
	}
}

void ChoiceOne(){
	string UserName, Password, UserLog, PassLog;
	cout<<"Please create a username: ";
	cin>>UserName;
	cout<<"Please create a password: ";
	cin>>Password;
	cout<<endl<<"You have registered successfully! Please log in."<<endl;
	cout<<"Username: ";
	cin>>UserLog;
	cout<<"Password: ";
	cin>>PassLog;
	if (PassLog == Password and UserLog == UserName) {
		cout<<"Login Successful! Thanks for logging in,"<<" "<<UserName<<endl;
		MenuThing();
	} else {
		cout<<"Login failed. Your account has been locked for now (very inconvenient!!!)"<<endl;
	}
}


int main(){
	cout<<"Welcome to maib. Would you like to exit or continue? (1 - continue; 2 - leave):  ";
	int UserChoice;
	cin>>UserChoice;
	switch(UserChoice){
		case 1:
			ChoiceOne();
			break;

		case 2:
			cout<<"Bye";
			break;
	}
	return 0;
}