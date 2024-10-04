//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

//ex---->	Example 1:
//
//Input: nums = [1,3,5,6], target = 5
//Output: 2
//Example 2:
//
//Input: nums = [1,3,5,6], target = 2
//Output: 1
//Example 3:
//
//Input: nums = [1,3,5,6], target = 7
//Output: 4

#include<iostream>
using namespace std;
int main()
{
	int arr[4]={1,3,5,6};
	
	int st=0,end=4,target=4;
	
	while(st<end){
	int mid=(st+end)/2;
	if(arr[mid]==target)
	{
		cout<<mid;
		return 0;
	}
else if(target<arr[mid])
	{
			end=mid;
	}
else
{
		st=mid+1;	
}
}

	cout<<st;


}
