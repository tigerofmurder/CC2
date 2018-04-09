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
void intercambia0 (char arr[],int tam){
	int letter=0;
	srand(time(NULL));
	for (int i=0;arr[i]!=NULL;i++){
		letter=rand()%100+10;
		arr[i]=char(letter);
	}
	char *seq0=arr;
	mostrar_letter(seq0);
}

void intercambia (char *seq0){
	int letter=0;
	srand(time(NULL));
	for (int i=0;*(seq0+i)!=NULL;i++){
		letter=rand()%100+10;
		*(seq0+i)=char(letter);
	}
	
	mostrar_letter(seq0);
}
main(){
	char *cad0=new char [10];
	cout<<"palabra: ";cin>>cad0;
	intercambia(cad0);
	char arr[]={'a','b','c','d','e','/0'};
	intercambia0(arr,5);
}
