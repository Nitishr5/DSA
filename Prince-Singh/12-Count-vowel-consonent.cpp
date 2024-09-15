#include<iostream>
using namespace std;

int main(){
	char a[50];
	int i,vol=0,cons=0;
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		if((a[i]<=65&&a[i]>=90)||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
		a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		vol++;
		else 
		cons++;
		i++;
	}
	cout<<" Total Vowel= "<<vol<<endl;
	cout<<"Total Consonent= "<<cons;
}		
	
