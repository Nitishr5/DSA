#include<iostream>
using namespace std;
int main()
{
	int arr[5]={4,6,3,9,7};
	//find minimum value
	int ans=INT_MAX;
	for(int i=0;i<5;i++)
	{
		if(arr[i]<ans)
			{
				ans=arr[i];
			}
	}
	cout<<"Minimum value is = "<<ans;
}
