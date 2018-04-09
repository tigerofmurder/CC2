#include<iostream>
using namespace std;
int valor (int x){
  x=3;
  return x;
}
int valor1 ( int &x){
  x=5;
  return x;
}
int main() {
  int x=2;
  cout<<valor(x)<<endl;
  cout<<x<<endl;
  cout<<valor1(x)<<endl;
  cout<<x<<endl;
  return 0;
}
