
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int arr[6]={0,0,1,1,5,6},k=7;
	int n= 6;
	for(int i=0;i<n-3;i++){
	for(int j=i+1;i<n-2;j++)
	{
	int	ans=k-arr[i]-arr[j];
	int	start=j+1, end=n-1;
		
		while(start<end)
		{
			if(arr[start]+arr[end]==ans)
			cout<<"1";
		else if(arr[start]+arr[end]<ans)
		start++;
	else 
		end--;
		}

	}
}

	cout<<"0";
	
}
