//orignal is 	1 2 3 4 						16 15 14 13
//			5 6 7 8							12 11 10 9
//			9 10 11 12		After rotate    8  7   6 5
//			13 14 15 16						1  2  3  4




#include<iostream>
using namespace std;
int main()
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int n=4;
	
//	Transpose matrix
	for(int j=0;j<n;j++)
	{
		int start=0,end=n-1;
		while(start<end)
		{
			swap(arr[start][j],arr[end][j]);
			start++,end--;
		}
	}
	
	//Reverse Rowwise
	
	for(int i=0;i<n;i++)
	{
		int start=0,end=n-1;
		while(start<end)
		{
			swap(arr[i][start],arr[i][end]);
			start++,end--;
		}
	}
	
	
	
	
	//Print the matrix 180 deg reverse
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}
