#include<iostream>
using namespace std;

int main(){
    char letter;
    cout << "Enter Character : ";
    cin >> letter;

    switch (letter)
    {
    case 'a':
        printf("%s", "given letter is vowel..");
        break;
    case 'e':
        printf("%s", "given letter is vowel..");
        break;
    case 'i':
        printf("%s", "given letter is vowel..");
        break;
    case 'o':
        printf("%s", "given letter is vowel..");
        break;
    case 'u':
        printf("%s", "given letter is vowel..");
        break;
    default:
        cout << "Given letter is consonent";
        break;
    }
}