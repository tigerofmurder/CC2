#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void mostrar_letter (char *v,int n){
	for (int i=0;i<n;i++){
		cout<<*(v+i);
	}
	cout<<endl;
}

void mostrar(char arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
}
void intercambia (char arr[],char arr0[100]){
	int tam0=strlen(arr);
	int tam1=strlen(arr0);
	for (int i=0;i<tam1;i++){
		arr[i]=arr0[i];
	}
	for (int j=tam1;j<tam0;j++){
		arr[j]=' ';
	}
	mostrar(arr,tam1);
}
void intercambia1 (char *seq0, char *seq1){
	int tam0=strlen(seq1);
	delete seq0;
	seq0=new char[10];
	for (int i=0;i<tam0;i++){
		*(seq0+i)=*(seq1+i);
	}
	mostrar_letter(seq0,tam0);
}

main(){
	char *cad0=new char [10];
	cout<<"palabra: ";cin>>cad0;
	char *cad1=new char [10];
	cout<<"palabra: ";cin>>cad1;
	intercambia(cad0,cad1);
	intercambia1(cad0,cad1);
}
