#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void mostrar(char *v,int n){
	for (int i=0;i<n;i++){
		cout<<*(v+i);
	}
	cout<<endl;
}

void mostrar0(char *v){
	while(*(v)!=NULL){
		cout<<*(v++);
	}
	cout<<endl;
}

void concatenar0 (char arr0[100],char arr1[100],int tam0,int tam1){
	for (int j=0;j<tam1;j++){
		arr0[tam0+j]=arr1[j];
	}
	char *arr3=arr0;
	mostrar(arr3,tam0+tam1);
}


void concatenar1(char *seq0,char *seq1){
	int t0=strlen(seq0);
	while(*(seq1)!=NULL){
		*(seq0+(t0++))=*(seq1++);
	}
	mostrar(seq0,t0);	
}
void concatenar2(char *seq0,char *seq1){
	while (*(seq0)!=NULL){
		*(seq0++);
	}
	while(*(seq1)!=NULL){
		*(seq0)=*(seq1);
		*(seq0++);
		*(seq1++);
	}
}

main(){
	char *cad0=new char [10];
	cout<<"palabra: ";cin>>cad0;
	char *cad1=new char [10];
	cout<<"palabra: ";cin>>cad1;
	concatenar2(cad0,cad1);
	mostrar(cad0,sizeof(cad0));
	concatenar0(cad0,cad1,3,3);	
}
