#include<iostream>
using namespace std;
int main()
{
	int arr[7]={4,5,6,7,0,1,2};
	int ans=-1, start=0,end=6,mid;
	int target=0;
	
	while(start<=end)
	{
		 mid=(start+end)/2;
		
		if(arr[mid]==target)	// I find my element
		return mid;
		
		else if(arr[mid]>=arr[0])	//Left side sorted
		{
			if(arr[start]<=target && arr[mid]>target)
				end=mid-1;
			else
				start=mid+1;
		}
					//Right side sorted
		else {
		
		if(arr[mid]<target &&  arr[mid]>=target)
			start=mid+1;
	else
	
		end=mid-1;
	
}
}
cout<<mid;

}
