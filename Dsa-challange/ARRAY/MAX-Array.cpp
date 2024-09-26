#include<iostream>
using namespace std;
int main()
{
	int arr[5]={4,6,3,9,7};
	//find minimum value
	int ans=INT_MIN;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>ans)
			{
				ans=arr[i];
			}
	}
	cout<<"MAX value is = "<<ans;
}
