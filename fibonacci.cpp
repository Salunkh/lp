#include<bits/stdc++.h>
using namespace std;

int iterfib(int n){
  if(n==1 || n==2){
     return 1;
  }
  int n1=1;
  int n2=1;
  int n3=0;
  for(int i=3;i<=n;i++){
    n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<n2<<" ";
  }
  return n2;
}
int main(){
  cout<<"number enter kijiye";
  int n;
  cin>>n;
  iterfib(n);
}
