#include <iostream>
#include <ctype.h>
using namespace std;
int tamano1 (float arr[]){
  int i=0;
  while(arr[i]!='\0'){
    i++;
    //cout<<i<<endl;
  }
  return i;
}

void mostrar(char *arr){
	for (int i=0;*(arr+i)!=NULL;i++){
		cout<<*(arr+i);
	}
	cout<<endl;
}

void mostrar1(float *arr){
	for (int i=0;*(arr+i)!=NULL;i++){
		cout<<*(arr+i);
	}
	cout<<endl;
}
long long int multi(int aux){
	long long int div=1;
	for (int i=0;i<aux-1;i++){
		div=div*10;
	}
	return div;
}

double convertir (float *arr,int aux){
	double numero=0;
	int tam=tamano1(arr);
	int aux0=multi(aux);
	for (int j=0;*(arr+j)!=NULL;j++){
		numero=numero+(multi(tam-j) * (*(arr+j)));
		//cout<<numero<<"*"<<multi(tam-j)<<"="<<*(arr+j)<<endl;
	}
	//cout<<numero;
	return numero;
	
}

double numero(char a[]){
	float *arr0=new float [100];
	int j=0;
	int aux=0;
	for (int i=0;a[i]!=NULL;i++){
		if (!isalpha(a[i]) && !ispunct(a[i])){
			int valor=a[i]-48;
			*(arr0+j)=valor;
			j++;
		}
		if (a[i]==char(46)){
			aux=i;
		}
	}
	mostrar1(arr0);
	return convertir(arr0,aux);
	
}

int main()
{
    char a[]="1hsf78h43yg6H.FGTYGUK67fgyfg5TFF56f";
    cout<<numero(a);
}
