#include<iostream>
using namespace std;

int main(){
	char ch;
	float num1 , num2 , total;
	cout << endl << "menu mathemativla operaation " << "+ " << "- "  << "* "  << "/ " << endl;
		 
	cin >> ch;
	
	switch(ch)
	{
		case '+':
			cout <<  "enter Number : "<< endl; 
			cin >> num1 ;
			cout <<  "Enter Number : "<< endl; 
			cin >> num2;
		total = num1 + num2;
			cout << total;
			break;
			
		case '-':
			
			cout <<  "enter Number : "<< endl; 
			cin >> num1 ;
			cout <<  "enter Number : "<< endl; 
			cin >> num2;
			total = num1 - num2;
			cout << total;
			break;
			
		case '*':
			
			cout <<  "enter Number : "<< endl; 
			cin >> num1 ;
			cout <<  "enter Number : "<< endl; 
			cin >> num2;
			total = num1 * num2;
			cout << total;
			break;
		case '/':
			cout <<  "enter Number : "<< endl; 
			cin >> num1 ;
			cout <<  "enter Number : "<< endl; 
			cin >> num2;
			total = num1/num2;
			cout << total;
			break;
			
		default :
			cout << "Plz select correct operation ..."; 
	}
	return 0; 
	
} 
