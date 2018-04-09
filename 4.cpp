#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

void crear_matriz(int **&M,int f,int c){
	M=new int *[f];
	for (int i=0;i<f;i++){
		M[i]=new int [c];
	}
}
void llenar(int **&M,int f,int c){
	for (int i=0;i<f;i++){
		for (int j=0;j<c;j++){
			cin>>*(*(M+i)+j);
		}
	}
}
void mostrar(int **&M,int f,int c){
	for (int i=0;i<f;i++){
		for (int j=0;j<c;j++){
			cout<<*(*(M+i)+j)<<" ";
		}
		cout<<endl;
	}
}
int elem(int x,int y){
	return x*y;
}
void multiplicar(int **&M,int f,int c, int **&M0,int f0,int c0){
	int **M1;
	crear_matriz(M1,f,c);
	for (int i=0;i<f;i++){
		for (int j=0;j<c0;j++){
			*(*(M1+i)+j)=0;
			for (int k=0;k<f;k++){
				int valor0=*(*(M+i)+k);
				int valor1=*(*(M0+k)+j);
				*(*(M1+i)+j)=*(*(M1+i)+j) + valor0 * valor1;
				cout<<"--------"<<valor0<<"-----------"<<endl;
				cout<<"--------"<<valor1<<"-----------"<<endl;
				cout<<"--------"<<*(*(M1+i)+j)<<"-----------"<<endl;
			}
			cout<<"-----------------------"<<endl;
		}
		
	}
	mostrar(M1,f,c);
			
}


main(){
	int **M,**M0,f,c;
	cout<<"NUMERO DE FILAS: ";cin>>f;
	cout<<"NUMERO DE COLUMNAS: ";cin>>c;
	crear_matriz(M,f,c);
	llenar(M,f,c);
	crear_matriz(M0,f,c);
	llenar(M0,f,c);
	//mostrar(M,f,c);
	//mostrar(M0,f,c);
	multiplicar(M,f,c,M0,f,c);
}
