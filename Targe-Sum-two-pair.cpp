//find the total number of pairs in the Array whose sum 
//is equal to given targetsum...



#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,4,6,7,1}; // is Array mei kitna pair sum 7 ke barabar ho skta hai
	int targetsum=7;
	int pairs=0;
	int size=5;
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]+arr[j]==targetsum)
			pairs++;
		}
	}
	
	cout<<pairs; // output for this question is = 2
}
