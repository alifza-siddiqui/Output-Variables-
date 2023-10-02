
/*Given the length and breadth of a rectangle.write a program to find 
whether numerically the area of the rectangleis greaterthan its perimeter.*/
#include<iostream>
using namespace std;
int main(){
      int length, breadth;
      cout<<"Enter the length of rectangle:";
      cin>>length;
      cout<<"Enter the breadth of rectangle:";
      cin>>breadth;
      if(length*breadth > 2*(length+breadth)) cout<<" Area > Perimeter.";
      else cout<<"Area < Perimeter.";
      return 0;
}