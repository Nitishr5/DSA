#include<iostream>
using namespace std;

int Cube(int n){
	int cube;
	cube=n*n*n;
	return cube;
}

int main()
{
	int num;
	cout<<"Enter a number for find qube";
	cin>>num;
	cout<<Cube(num);
}
