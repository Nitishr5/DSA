//	1 2 3 4 						1 5 9 13										13 9  5 1
//	5 6 7 8							2 6 10 14										14 10 6 2
//	9 10 11 12		after transpose	3 7 11 15   after we rotate this we get this->  15 11 7 3
//	13 14 15 16						4 8 12 16										16 12 8 4



#include<iostream>
using namespace std;
int main()
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int n=4;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
		cout<<"Rotate 90 deg-------------->"<<endl<<endl;
		
			for(int i=0;i<n;i++)		// 1st a Transpose matrix code-------------->
	{
		for(int j=i+1;j<n;j++)
		{
			swap(arr[i][j],arr[j][i]);
//		matrix[j][i]=arr[i][j];
		}
	}
	
	
	for(int i=0;i<n;i++)		// and,	reverse col wise after transpose matrix we get the rotate matrix 90 deg
	{
		int start=0,end=n-1;
		while(start<end)
		{
			swap(arr[start][i],arr[end][i]);
			start++,end--;
		}
	}
	
	
	
	
		for(int i=0;i<n;i++)			// print rotate matrix..
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}
