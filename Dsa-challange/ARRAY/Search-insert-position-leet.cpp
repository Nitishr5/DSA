#include<iostream>		//Leet code 35 problem Search insert position

using namespace std;
int main()
{
	int arr[4]={1,3,5,6};
	int start=0, end=3, ans=3,mid;	//in ans we pre-store arr.size() 
	int target= 4;
	
	while(start<=end)
	{
		mid = start+(end-start)/2;
		if(arr[mid]==target)
		{
			ans=mid;
			break;
		}
		else if(arr[mid]<target)
		start=mid+1;
		else{
			ans=mid;
			end=mid-1;
		}
		
	}
	cout<<ans;
}
