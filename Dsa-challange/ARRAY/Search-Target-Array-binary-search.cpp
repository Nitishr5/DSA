#include<iostream>	//Leet code proble no- 33
using namespace std;
int main()
{
	int arr[10]={4,5,6,7,0,1,2};
	int ans=-1,start=0,end=6,target=1;
	
	while(start<=end)
	{
		int mid=(start+end)/2;
		
		if(arr[mid]==target)
		{
		cout<<"Found Target at index = "<<mid;
		return 0;
	}
		 if(arr[mid]>=arr[0])	//left part will be sorted
		
		if(arr[start]<=target && arr[mid]>=target)		//target in left part
			end=mid-1;
			else start=mid+1;		//target in right part
			
			else if(arr[mid]<=target && arr[end]>=target)//target in right part
				start=mid+1;
				
			else 			//target in left part
				end=mid-1;
	}
	
	 cout << "Target not found" << endl; // If not found
    return 0;
}
