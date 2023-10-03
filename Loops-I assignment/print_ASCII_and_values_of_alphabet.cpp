
// WAP to print all the ASCII values and their equivalent characters 
// of 26 alphabets using a while loop

#include<iostream>
using namespace std;
int main(){
    int upper_case_ascii=65;
    int lower_case_ascii=97;
    int i=1;
    while(i<=26){
        cout<<(char)upper_case_ascii<<" -> "<<upper_case_ascii<<"    ";
        cout<<(char)lower_case_ascii<<" -> "<<lower_case_ascii<<endl;
        lower_case_ascii++; upper_case_ascii++;
        i++;
    }

    return 0;
}