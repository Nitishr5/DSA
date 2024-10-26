#include<iostream>
using namespace std;
int main()
{
	int stalls[5]={1,2,4,8,9},n=5,k=3;
	int start=1,end,mid,ans;
	//sort them  in incresing order
//	sort(stalls.begin(),stalls,end());
	
	end=stalls[n-1]-stalls[0];
	
	while(start<=end)
	{
		mid= start+(start-start)/2;
		int count=1, pos=stalls[0];
		for(int i=1;i<n;i++)
		{
			if(pos+mid<=stalls[i])
			{
				count++;
				pos=stalls[i];
			}
		}
		
		if(count<k)
		{
			end=mid-1;
		}
		else{
			ans=mid;
			start=mid+1;
		}
	}
	
	cout<<ans;
	
}
