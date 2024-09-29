#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int index=0,n,i,j;
	
	cout<<"Enter Size of Array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Array Element";
		cin>>arr[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[index])
			{
				index=j;
			}
		}
		swap(arr[index],arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
