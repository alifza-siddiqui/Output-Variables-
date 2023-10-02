
/* Write a program to input sides of a triangle and check 
whether a triangle is equilateral, scalene or isosceles triangle.
*/
#include<iostream>
using namespace std;
int main(){
     int side1,side2,side3;
     cout<<"Enter the first side of triangle:";
     cin>>side1;
     cout<<"Enter the second side of triangle:";
     cin>>side2;
     cout<<"Enter the third side of triangle:";
     cin>>side3;
     if(side1==side2){
         if(side2==side3) cout<<"It is an equilateral triangle.";
         else cout<<" It is an isoceles triangle.";
     }
     else if(side2==side3 || side1==side3) cout<<" It is an isoceles triangle.";
     else cout<<" It is scalene triangle.";
    return 0;
}