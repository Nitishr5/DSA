#include<iostream>
using namespace std;
int main()
{
	int total,avg;
	int arr[20]={2,3,4,6,7,8,9,6,34,2,54,65,6,14,15,16,17,18,19,20};
	
		for(int i=0;i<20;i++)
		{
			total=total+arr[i];
			avg=total/20;
		}
		
		cout<<"Total = "<<total<<endl;
		cout<<"Average = "<<avg;
}
