#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n,i,j;
	
	cout<<"Enter size of array";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter element ";
		cin>>arr[i];
	}
	
	for(i=n-2;i>=0;i--)
{
	bool swapped = 0;
	for(j=0;j<=i;j++)
	{
		if(arr[j]>arr[j+1])	//  if we want in Descending order change > to <  .
		{
			swapped=1;
			swap(arr[j],arr[j+1]);
		}
	}
	
	if(swapped==0)
	break;
}

		
		cout<<"Sorted Value Are : = ";
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
