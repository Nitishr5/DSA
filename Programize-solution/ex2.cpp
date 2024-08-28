// Program to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;

int main(){
	int num1,num2,num3;
	cout<<"Enter Three NUmber";
	cin>>num1>>num2>>num3;
	
	if(num1>num2 && num1>num3){
		cout<<"Num1 is Largest number";
	}
	else if(num2>num1 && num2>num3){
		cout<<"Num2 is largest number";
	}
	else{
		cout<<"Num3 is largest number";
	}
}
