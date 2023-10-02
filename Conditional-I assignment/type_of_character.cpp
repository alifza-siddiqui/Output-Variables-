/*Write a C++ program to input any character and
 check whether it is the alphabet, digit or special character.
*/
#include <iostream>
using namespace std;
int main(){
     char ch;
    cout<<" enter the character :"; cin>>ch;
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)) cout<<"It is an alphabet.";
    else if(ch>=48 && ch<=57) cout<<"It is a digit.";
    else cout<<" It is a special character.";
    return 0;
}

