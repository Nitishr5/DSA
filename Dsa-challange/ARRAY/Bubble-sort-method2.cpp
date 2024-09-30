#include<iostream>		// THis program sort value from last 
using namespace std;	// this problem from rohit negi bubble sort H.W
int main()
{
	int  arr[10]={7,4,8,5,3},i;
	
	for(i=0;i<=3;i++){
	for(int j=4;j>=0;j--)
	{
		if(arr[j]<arr[j-1])
		{
			swap(arr[j],arr[j-1]);
		}
	}
}
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i];
	}
}
