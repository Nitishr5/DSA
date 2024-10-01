#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int i,j,n;
	
	cout<<"Enter the size of Array";
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			swap(arr[j],arr[j-1]);
		else
		break;
		}
	}
	
	cout<<"Sorted Array ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
}
