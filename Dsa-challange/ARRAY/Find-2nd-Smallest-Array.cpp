#include<iostream>
using namespace std;
int main()
{
	int arr[6]={5,6,4,9,7,2};
	int min=INT_MAX;
	
	for(int i=0;i<6;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	int secmin=INT_MAX;
	for(int i=0;i<6;i++)
	{
		if(min!=arr[i])
			if(arr[i]<secmin)
			{
				secmin=arr[i];
			}
	}
	cout<<"Minimu value is = "<<min<<endl;
	cout<<"2nd Minimum value is = "<<secmin;
}
