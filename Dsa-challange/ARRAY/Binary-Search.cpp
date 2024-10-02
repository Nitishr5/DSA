#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n,int key)
{
	int start=0, end=n-1,mid;
	
	while(start<=end)
	{
		
		mid= (start+end)/2;	//find mid
		
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]<key)	//	use > for array sorted in decreasing order (5,4,3,2,1)
		start=mid+1;
		else
		end= mid-1;
	}
	return -1;
}
int main()
{
	int arr[1000];
	int n;
	cout<<"Enter size of Array";
	cin>>n;
	
	cout<<"Enter the element in Array";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int key;
	cout<<"Enter the key";
	cin>>key;
	
	cout<<BinarySearch(arr,n,key)<<endl;
	return 0;
}
