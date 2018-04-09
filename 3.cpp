#include<iostream>
using namespace std;

void mostrar(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertSort(int arr[],int n){
	int aux;
	for (int i=1;i<n;i++){
		aux=arr[i];
		int j=i-1;
		while (j>=0 && arr[j]>aux){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=aux;
	}
	mostrar(arr,7);
}

void insertSort1(int arr[],int n){
	int aux;
	for (int i=1;i<n;i++){
		aux=arr[i];
		int j;
		for(j=i-1;j>=0 && arr[j]>aux;j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=aux;
	}
	mostrar(arr,7);
}
main(){
	int arr[]={6,2,4,9,0,1,5};
	mostrar(arr,7);
	insertSort(arr,7);
	insertSort1(arr,7);
}
