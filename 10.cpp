#include <iostream>
#include <ctype.h>
using namespace std;
void numero(char a[]){
	char *arr=a;
	while(*(arr)!=NULL){
		
	}
}

int main()
{
    char a[]="hsf78h43yg6H.FGT,YGUK67fgyfg5TFF56f";
    char b=a[0];
    for (int i=0;b!=NULL;b=a[++i]){
        if (!isalpha(b) && !ispunct(b) )
            cout<<(char)(isupper(b)?tolower(b):b);

    }
}
