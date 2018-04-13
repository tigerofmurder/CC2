#include <iostream>
#include <stdio.h>
using namespace std;
void mostrar0(char arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
}
void mostrar(char *v){
	while(*(v)!=NULL){
		cout<<*(v++);
	}
	cout<<endl;
}
void intercambia (char arr[],char arr0[100]){
	int tam0=sizeof(arr);
	int tam1=sizeof(arr0);
	for (int i=0;i<tam1;i++){
		arr[i]=arr0[i];
	}
	for (int j=tam1;j<tam0;j++){
		arr[j]=' ';
	}
}
void intercambia1 (char *seq0, char *seq1){
	delete seq0;
	seq0=new char[10];
	while(*(seq1)!=NULL){
		*(seq0)=*(seq1);
		*(seq0++);*(seq1++);
	}
}

main(){
	char *cad0=new char [10];
	cout<<"palabra: ";cin>>cad0;
	char *cad1=new char [10];
	cout<<"palabra: ";cin>>cad1;
	intercambia1(cad0,cad1);
	mostrar(cad0);
	intercambia(cad0,cad1);
	mostrar0(cad0,sizeof(cad0));
}
