#include<iostream>
using namespace std;
int main()
{
	int n,sqr;
	cout<<"Enter a number";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		if(i*i<=n)
		sqr=i;
	}
	cout<<sqr;
}
