#include<iostream>
using namespace std;
int main(){
	int num;
	
	cout<<"Enter a year";
	cin>>num;
	
	if(num%4==0){
		cout<<"Leap Year";
	}
	else{
		cout<<"Not Leap Year";
	}
}
