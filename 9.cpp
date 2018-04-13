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

bool palindroma (char *seq){
	int t=strlen(seq); //por el tamaño si no puedo pasar la cantidad
	//int i=0;
	for (int i=0;i<(t/2);i++){
		int n=(t-1)-i;
		if (*(seq+i)!=*(seq+n)){
	//		cout<<"false";
			return false;
		}
	}
	//cout<<"true";
	return true;
}
bool palindroma0(char *seq){
	char *seq1=seq;
	while (*(seq)!=NULL){
		*(seq++);
	}
	while(*(seq1)!=NULL){
		*(seq--);
		cout<<*(seq1)<<"="<<*(seq)<<endl;
		if (*(seq1)!=*(seq)){
			return false;
		}
		*(seq1++);
	}
	return true;
}
main(){
	char *cad=new char [10];
	cout<<"palabra: ";cin>>cad;
	cout<<palindroma0(cad)<<endl;
	mostrar_letter(cad,3);
}
