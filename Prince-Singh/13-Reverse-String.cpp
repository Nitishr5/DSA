#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int word;
	char a[50];
	cout<<"Enter a string";
	gets(a);// in string using gets() for take a input 
	
	int i=0;
	while(a[i]!='\0'){
		cout<<a[i];
		i++;
		
		if(a[i]==' ')
		 word++;
		 
		 
	}
	cout<<endl<<" reverse string "<<strrev(a);//  This is the Reverse of string 
	
	cout<<endl<<"Length of String is "<<i;
}
