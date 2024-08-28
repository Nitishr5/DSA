
// Program to Generate Multiplication Table


#include<iostream>
using namespace std;

int main(){
	int num, table=1;
	
	cout <<"Enter a number to print a table ";
	cin>>num;
	for(int i=1; i<=10;i++)
	{
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
}
