#include<iostream>
//falta
using namespace std;
int tamano (char arr[]){
	char *ptr=arr;
	int i=0;
	while (*(ptr++)!=NULL){
		i++;
	}
	cout<<int(*(ptr))<<endl;
	cout<<int(arr[0])<<endl;
	return int(*(arr));
}
int tamano1 (char arr[]){
  int i=0;
  while(arr[i]!='\0'){
    i++;
    //cout<<i<<endl;
  }
  return i;
}
int main() {
  char arr[]="Hello world!";
  cout<<tamano(arr)<<endl;
  cout<<tamano1(arr)<<endl;
  return 0;
}
