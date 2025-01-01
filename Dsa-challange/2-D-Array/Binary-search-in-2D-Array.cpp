#include<iostream>
using namespace std;
int main()
{
	int matrix[4][5]={2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};
	int n=4,m=5,x=200;
	int start=0,end=n*m-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		int row_index=mid/m;
		int col_index=mid%m;
		
		if(matrix[row_index][col_index]==x)
		return 1;
		else if(matrix[row_index][col_index]<x)
		start=mid+1;
		else
			end=mid-1;
	}
	return 0;
}
