#include<iostream>
#include <cmath>
using namespace std;
int Countdigit(int n)
{
	int count=0;
	while(n)
	{
		count++;
		n=n/10;
	}
	return count;
}
int Armstrong(int num, int digit)
{
	int n=num, ans=0, rem;
	while(n)
	{
		rem= n%10;
		n=n/10;
		ans = ans+pow(rem,digit);	//
	}
	if(ans==num)
	cout<<1;
	else
	cout<<0;
}

int main()
{
	int num;
	cout<<"Enter a number";
	cin>>num;
	
	//count digit
	int digit= Countdigit(num);
	//Armstrong number
	Armstrong(num,digit);
}
