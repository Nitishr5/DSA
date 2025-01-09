#include<iostream>	//Leet code proble no- 852 && gfg problem peak element
using namespace std;
int main()
{
	int arr[10]={2,4,6,8,10,8,5};
	int start=0,end=6,mid;
	
	
	while(start<=end)
	{
		mid=end+(start-end)/2;
		
		//Peak element
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
		{
//		return mid;
		cout<<"Peak part index is = "<<mid;
		return 0;
	}
		
		//Right side move
	else if(arr[mid]>arr[mid-1])
			start=mid+1;
			
			//Left side move
	else	
			end=mid-1;
	}
	return -1;
}
