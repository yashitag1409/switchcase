#include<iostream>
using namespace std;

int main(){
	int balance = 1000000 , choose , withdraw , deposit;
	
	cout << "Choose what you want to do :"
		 <<"0 - quit " <<"1 - withdraw " << "2 - deposit " << endl;
	
	cin >> choose ;
	
	switch(choose)
	{
		
		case 0:
			cout << "Thank you" << endl;
			break;
		
		case 1:
			cout << "Enter Amount to withdraw : " << endl;
			cin >> withdraw;
			
			balance = balance - withdraw;
			cout << balance;
			break;
		
		case 2:
			cout << "Enter amount to deposit : " << endl;
			cin >> deposit;
			balance = balance + deposit;
			cout << balance;
			break;
		
		default:
			cout << "Enter Correct value ..." << endl;
	}
	return 0;
}
