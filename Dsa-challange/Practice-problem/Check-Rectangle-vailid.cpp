#include<iostream>
using namespace std;
int main()
{
	int a=2,b=4,c=2,d=4;
	
	if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
	{
		cout<<"Vailid Rectangle";
	}
	else{
		cout<<"Not- Valid rectangle";
	}
}
