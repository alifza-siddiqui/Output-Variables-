/*
Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
               ******
               *    *
               *    *
               ******
*/

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the no. of rows:";
    cin>>m;
    cout<<"enter the no. of columns:";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if((i==1)||(i==m)) cout<<"*";
            else if((j==1)|| (j==n)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}