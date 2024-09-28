#include<iostream>
using namespace std;
int main()
{
	int arr[20], size,i,ans2=0;
	
	cout<<"Enter size of array";
	cin>>size;
	

				
	for(i=0;i<size;i++)
	{
		cout<<"Enter Array element ";
		cin>>arr[i];
	}
		for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}


	int ans=INT_MIN;			// find 1st largest
	for(int i=0;i<size;i++)
	{
		if(arr[i]>ans)
			{
				ans=arr[i];
			}
	}
	int secondans=INT_MIN;			//find second largest
	for(int i=0;i<size;i++)
	{
		if(arr[i]!=ans)
		if(arr[i]>secondans)
		{
			secondans=arr[i];
		}
		
	}
	cout<<endl;
	cout<<"MAX= "<<ans<<endl;
	cout<<"Second max = "<<secondans;


}
