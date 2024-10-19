#include<iostream>
using namespace std;

int CountZero(int arr[],int n)
{
	int low=0;
	int high=n-1;
	
	while(low<=high)
	{
		int mid= low+((high-low)/2);
		
		if(arr[mid]==1){
			low=mid+1;
		}
		
		else {
			high=mid-1;
		}
	}
	
		return n-1-high;
}


int main()
{
	int arr[11]={1,1,1,1,1,0,0,0,0,0,0};
	
	cout<<"count of zero= "<<CountZero(arr,11);
}
