#include<bits/stdc++.h>
using namespace std;

struct Item{
  int value,weight;
  Item(int value,int weight):value(value),weight(weight){
  }
};

bool cmp(struct Item a,struct Item b){
  double r1=(double)a.value/a.weight;
  double r2=(double)b.value/b.weight;
  return r1>r2;
}

//main greedy function to solve problems

double fractionalknapsack(struct Item arr[],int N,int size){
   sort(arr,arr+size,cmp);
   //current wt of knapsack
   int currwt=0;
   //result value of knapsack
   double result=0.0;
   for(int i=0;i<size;i++){
     //part where we add item
     if(currwt+arr[i].weight<=N){
       currwt+=arr[i].weight;
       result+=arr[i].value;
     }
     //if we can't add item add fractional part
     else{
       int remain=N-currwt;
       result+=((double)remain/arr[i].weight)*arr[i].value;
       break;
     }
   }
   return result;

}

int main(){
     int N=60;
     Item arr[]={{30,5},{40,10},{45,15},{77,22},{90,25}};
     int size=sizeof(arr)/sizeof(arr[0]);
     //function call
     cout<<"max profit earned= "<<fractionalknapsack(arr,N,size)<<endl;
     return 0;



}



