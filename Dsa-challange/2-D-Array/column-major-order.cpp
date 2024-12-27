//
//column major order print in this order
//							  1 5 9 13 
//							  2 6 10 14
//							  3 7 11 15
//							  4 8 12 16




#include<iostream>
using namespace std;
int main(){
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	for(int j=0;j<4;j++)
	{
		for(int i=0;i<4;i++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
