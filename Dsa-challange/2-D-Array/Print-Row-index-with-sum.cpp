//in this program which row is maximum sum print them value
//	
//	3 4 7 18 = 32
//	2 8 3 9	 = 22
//	5 4 2 2  = 13
//	7 3 0 8  = 18
//	2 8 9 1	 = 20
//	
//				so, maximum value is index 0 (32) Answer is =0;


#include<iostream>
using namespace std;
int main()
{
	int arr[5][4]={3,4,7,18, 2,8,3,9, 5,4,2,2, 7,3,0,8, 2,8,9,1};
	int sum=INT_MIN,index=-1;
	
	for(int i=0;i<5;i++)
	{
		int total=0;
		for(int j=0;j<4;j++)
		
			total=total+arr[i][j];
			if(total>sum)
	{
		sum=total;
		index=i;
	}

	}
		cout<<index;

}
