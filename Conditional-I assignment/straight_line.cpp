
/*Given three points (x1, y1), (x2, y2) and 
(x3, y3), write a program to check if all the three points fall on one straight line.
*/
#include<iostream>
using namespace std;
int main(){
      int x1,y1,x2,y2,x3,y3;
      cout<<"Enter the first point: ("; 
      cin>>x1;
      cout<<",";
      cin>>y1;
      cout<<")";
      cout<<"Enter the second point: ("; 
      cin>>x2;
      cout<<",";
      cin>>y2;
      cout<<")";
      cout<<"Enter the third point: ("; 
      cin>>x3;
      cout<<",";
      cin>>y3;
      cout<<")";
      float slope1,slope2;
      slope1=(y2-y1)/(x2-x1);
      slope2=(y3-y2)/(x3-x2);
      if(slope1==slope2) cout<<" All three points fall on straight line.";
      else cout<<" all points not fall on a same line.";
      

      
    return 0;
}