/// check if three sum = target value 
// return 1
// else return 0



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int arr[6]={1,4,6,8,10,45},k=24;
	int n= 6;
	for(int i=0;i<n-2;i++)
	{
	int	ans=k-arr[i];
	int	start=i+1, end=n-1;
		
		while(start<end)
		{
			if(arr[start]+arr[end]==ans)
			return 1;
		else if(arr[start]+arr[end]>ans)
		end--;
	else 
		start++;
		}

	}
		return 0;
	
}
