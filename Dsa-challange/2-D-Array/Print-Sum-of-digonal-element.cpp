#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int first=0;
	int sec=0;
	int row=3,col=3;
	//first diagonal sum------------
	int i=0;
	while(i<row)
	{
		first+=arr[i][i];
		i++;
	}
	
	//Second diagonal Sum---------------
	i=0;
	 int j=col-1;
	while(j>=0)
	{
		sec+=arr[i][j];
		i++,j--;
		
	}
	
	cout<<first<<" "<<sec;
}
