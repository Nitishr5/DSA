#include<iostream>
using namespace std;

int Sum(int m,int n) //Function declare
{
	int ans=m+n;  //function defination
	return ans;
}
int Mul(int m, int n)
{
	int ans= m*n;
	return ans;
}

void fun()	//it is simple 
{
	cout<<"Hello Coder Army\n";
}

int main(){
	int a,b;
	cout<<"Enter a number";
	cin>>a>>b;
	cout<<Sum(a,b);  //function call
	cout<<endl;
	cout<<Mul(a,b);
	cout<<endl;
	fun();
}
