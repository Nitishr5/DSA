#include<iostream>
using namespace std;
int main(){
	int num;
	
	cout<<"Enter a Year ";
	cin>>num;
	
	if(num%400==0){
		cout<<"Leap year";
	}
	else if(num%4==0 && num%100!=0)
	{
		cout<<"Leap year";
	}
	else{
		cout<<"Not leap year";
	}
}
