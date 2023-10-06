/*
Print the following pattern
Sample Input : n = 4
Output :
   
   ****
  ****
 ****
****
                                 */
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the no. of rows:";
    cin>>m;
    cout<<"Output_Pattern_\n";
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++){
          cout<<" ";
        }
        for(int j=1;j<=m;j++){
          cout<<"*";
        }
     cout<<endl;
    }
    return 0;
}