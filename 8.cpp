#include <iostream>
#include <time.h>
#include <stdlib.h> 

using namespace std;
void mostrar_letter (char *v){
	while (*(v)!=NULL){
		cout<<*(v++);
	}
	cout<<endl;
}
void mostrar (char v[],int tam){
	for (int i=0;i<tam;i++){
		cout<<v[i];
	}
	cout<<endl;
}
void copy0(char arr[],char arr0[100]){
	int x=sizeof(arr);
	for (int i=0;i<x;i++){
		arr0[i]=arr[i];
	}
}
void invierte0(char arr[],int tam){
	char arr0[tam];
	copy0(arr,arr0);
	for (int i=0;i<tam;i++){
		arr[i]=arr0[tam-1-i];
	}
}
void copy(char *p,char *p1){
	while (*(p)!=NULL){
		*(p1)=*(p);
		*(p++);*(p1++);
	}
}
void invierte (char *seq0){
	char *seq1=new char [100];
	copy(seq0,seq1);
	while (*(seq1)!=NULL){
		*(seq1++);
	}
	while (*(seq0)!=NULL){
		*(seq1--);
		*(seq0)=*(seq1);
		
		*(seq0++);
		
	}
}
main(){
	char *cad0=new char [10];
	cout<<"palabra: ";cin>>cad0;
	char arr[]={'a','b','c','d','e','/0'};
	invierte0(arr,5);
	mostrar(arr,5);
	invierte(cad0);
	mostrar_letter(cad0);
}
