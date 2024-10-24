//SHIP PACKAGES	Problem	using Binary search ------------------->>>>>
//check what minimum weight take in one part-------->>>

#include<iostream>
using namespace std;
int main()
{
	int arr[6]={3,2,2,4,1,4};
	int start=4,end=16,mid,ans,day=3;
	
	while(start<=end)
	{
		mid=(start+end)/2;
		int page=0,count=1;
		
		for(int i=0;i<6;i++)
		{
			page=page+arr[i];
			
			if(page>mid)
			{
				count++;
				page=arr[i];
			}
		}
		
		if(count<=day)
		{
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	
	cout<<"Minimum weight taken by ship in a day= "<<ans;
}
