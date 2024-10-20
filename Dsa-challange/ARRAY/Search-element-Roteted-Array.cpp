#include<iostream>
using namespace std;
int main()
{
	int arr[6]={3,5,8,10,1,2};
	int ans=arr[0],start=0,end=5;
	while(start<=end)
	{
	int	mid=start+(end-start)/2;
	
		if(arr[mid]>=arr[0])	//left side sorted Array
		{
			start= mid+1;
		}
		else{		//Right side sorted Array
	
			ans=arr[mid];
			end=mid-1;
			
			
		}
	}
	cout<<ans;
}
