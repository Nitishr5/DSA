#include<iostream>
#include <utility>
using namespace std;
int main()
{
	int arr[6];
	int start=0,end=5;
	
	for(int i=0;i<6;i++)
	{
		cout<<"Enter  numbers for swap";
		cin>>arr[i];
	}
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	};
	for(int i=0;i<6;i++)
	{
	
	cout<<arr[i]<<" ";
}
}
