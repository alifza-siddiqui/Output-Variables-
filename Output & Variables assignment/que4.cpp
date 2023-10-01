//  write a program to find the circumference of circle with radius 10 in C++
#include <iostream>
using namespace std;
void circumference(int radius){
    cout<<(3.142*radius*radius);
}
int main(){
      int radius=10;
      circumference(radius);
    return 0;
}