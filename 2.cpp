#include<iostream>
using namespace std;
int suma (int Arr[],int x){
  if (x==0){
    return 0;
  }
  return Arr[x]+suma(Arr,x-1);
}
int suma1 (int Arr[],int x){
  int cont=0;
  for (int i=0;i<x;i++){
    cont=cont+Arr[i];
  }
  return cont;
}
int main() {
  int Arr[]={1,2,3,4,5};
  cout<<suma(Arr,5)<<endl;
  cout<<suma1(Arr,5)<<endl;
  return 0;
}
