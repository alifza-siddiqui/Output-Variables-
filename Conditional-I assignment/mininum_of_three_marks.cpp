
/* If the marks of A, B and C are input through the keyboard, 
write a program to determine the student scoring least marks. */
#include<iostream>
using namespace std;
int minimum_marks(int marks1,int marks2,int marks3){
    if(marks1<marks2 && marks1<marks3) return marks1;
    if(marks2<marks1 && marks2<marks3) return marks2;
    if(marks3<marks1 && marks3<marks2) return marks3;
}
int main(){
     int marks1,marks2,marks3;
     cout<<"Enter first marks: "; cin>>marks1;
     cout<<"Enter second marks: "; cin>>marks2;
     cout<<"Enter third marks: "; cin>>marks3;
     cout<<"minimum marks is: "<<minimum_marks(marks1,marks2,marks3);
    return 0;
}