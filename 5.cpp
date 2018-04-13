#include<iostream>

using namespace std;
int tamano (char arr[]){
	int i=0;
	while(arr[i]!=NULL){
		i++;
	}
	return i;
}

int tamano1 (char arr[]){
	char *seq0=arr;
	char *seq1=arr;
	while (*seq1!=NULL){
		seq1++;
	}
	return seq1-seq0;
}
int main() {
  char arr[]={'h','e','l','l','o',' ','w','o','r','d','\0'};
  cout<<tamano(arr)<<endl;
  cout<<tamano1(arr)<<endl;
  return 0;
}
