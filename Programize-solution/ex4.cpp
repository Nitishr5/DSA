//Accept any two number. if the first number is greater than second number then print diffrence of two number.
//otherwise print their sum. Write this program using ternary operator.

#include<iostream>
using namespace std;
int main(){
	int num1, num2;
	
	cout<<"Enter two number";
	cin>>num1>>num2;
	
	(num1>num2) ? cout<<"Diffrence of two number is = "<<num1-num2 : cout<<"Sum of two number is "<<num1+num2;
}
