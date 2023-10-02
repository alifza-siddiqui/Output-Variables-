
/* Given the radius of the circle predict whether numerically area of 
this circle is larger than the circumference or not. */
#include <iostream>
using namespace std;
int main(){
    int radius;
    float area,circumference;
    cout<<"enter the radius of cicle:";
    cin>>radius;
    area= 3.142*radius*radius;
    circumference= 2*3.142*radius;
    if(area>circumference) cout<<"Area is greater than Circumference.\n";
    else cout<<"Area is not greater than Circumference.\n";
    return 0;
}