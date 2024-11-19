//Take nothing Return Nothing
//#include<iostream>
//using namespace std;
//
//void Sum(){
//	int a,b,c;
//	cout<<"Enter a number";
//	cin>>a>>b;
//	c=a+b;
//	cout<<"Sum is = "<<c;
//}
//int main()
//{
//	Sum();
//	
//}


//take something Return Something

#include<iostream>
using namespace std;

void Sum(int a,int b){
	int c;

	c=a+b;
	cout<<"Sum is = "<<c;
}
int main()
{
	int x,y;
	cout<<"Enter Two number";
	cin>>x>>y;
	Sum(x,y);
	
}
