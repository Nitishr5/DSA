#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,j,sum=0;
	for(i=0;i<10;i++)
	{
		cout<<"Enter a number";
		cin>>arr[i];
	}
	
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Totoal Sum = "<<sum;
}
