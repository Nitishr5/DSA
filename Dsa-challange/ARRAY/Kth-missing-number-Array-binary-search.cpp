//	leet code -> 1539
#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	int start=0,end=4,mid,ans=5,k=2;	//ans=arr.size()
	while(start<=end)
	{
		mid=start+(end-start)/2;
		
		if(arr[mid]-mid-1>=k)
		{
			ans=mid;
			end=mid-1;
		}
		else
		start=mid+1;
	}
	cout<<ans+k;
}


	// case: 1
//input: arr=[2,3,4,7,11], k=5
	//output=9
	//explanation: the missing integer are [1,5,6,8,9,10,12,13....].	 the 5th missing are 9;
	
	
	
//	case: 2
//	
//	input: arr=[1,2,3,4], k=2
//	output =6
//	
//	explain: the 2nd missing number in this array is	[5,6,7....]
