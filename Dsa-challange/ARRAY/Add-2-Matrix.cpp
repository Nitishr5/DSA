2 3 4 5			3 4 1 2 			5 7 5 7  
0 1 2 3		+	2 2 2 0		=		2 3 4 3
1 2 6 4			1 3 3 4				2 5 9 8





#include<iostream>
using namespace std;
int main()
{
	int arr1[3][4]={2,3,4,5,0,1,2,3,1,2,6,4};
	int arr2[3][4]={3,4,1,2,2,2,2,0,1,3,3,4};
	int result[3][4];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			result[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}
