#include<iostream>
using namespace std;

int main(){
    float balance ;
    float withdraw;
    float deposit;
    int choose;

    printf("%s","Welcome user007..");
    cout << "\nEnter Balance : ";
    cin >> balance;

    cout <<"Your Balance : "<< balance;

    cout << "\nPlease select : "<< endl << "1 " << "- Withdraw" << endl << "2 " << "- deposit " << endl;

    cin >> choose;

    switch (choose)
    {
    case 1:
        cout << "Enter Amount to Withdraw : ";
        cin >> withdraw;
        balance = balance - withdraw;
        printf("%s","Total balance : " );
        cout << balance << endl;
        break;
    case 2:
        cout << "Enter Amount to deposit : ";
        cin >> deposit;
        balance = balance + deposit ;
        printf("%s","Total balance : " );
        cout << balance << endl;
        break;
    
    default:
        cout << "OOPs wrong choice ... " << endl;
        break;
    } 
    cout << "Thank You have a nice day.." ;
}