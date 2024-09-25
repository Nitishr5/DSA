//This find how many zero in factorial in  last
//ex-   5 ka factorial =  120 --- 1 zero in last output = 1
//		4 ka factorial = 24 ---- No zero == 0

#include<iostream>		
using namespace std;
int main()
{
	int count=0,n;
	
	cout<<"Enter a number";
	cin>>n;
	
	while(n>=5)
	{
		count=count+n/5;
		n=n/5;
	}
	cout<<"Zero are = "<<count;
}
