#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    int temp;
    cin>>x>>y;
    while(x%y!=0){
     temp=y;     
      y=x%y;
      x=temp;
    }
    cout<<y<<" ";
    return 0;
 }