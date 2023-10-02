
/*Given a point (x, y), write a program to find out 
if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<" enter the x-coordinate value :"; cin>>x;
    cout<<" enter the y-coordinate value :"; cin>>y;
    if(x==0 && y!=0) cout<<"("<<x<<","<<y<<") lies on y-axis";
    else if(y==0 && x!=0) cout<<"("<<x<<","<<y<<") lies on x-axis";
    else if(x==0 && y==0) cout<<"("<<x<<","<<y<<") lies at origin.";
    else cout<<"INVALID CHOICE";
    return 0;
}