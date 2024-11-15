#include<iostream>
using namespace std;
int main()
{
	int total=100;
	int marks;
	
	cout<<"Enter marks";
	cin>>marks;
	
	if(marks>90 && marks<=100)
	{
		cout<<"Grade A "<<endl;
	}
	else if(marks>80 && marks<=90)
	{
		cout<<"Grade B ";
	}
	else if(marks>70 && marks<=80)
	{
		cout<<"Grde C";
	}
	else if(marks>60 && marks<=70)
	{
		cout<<"Grade D";
	}
	else if(marks>50 && marks<=60)
	{
		cout<<"Grade E";
	}
	else if(marks<=50)
	{
		cout<<"Faild";
	}
}
