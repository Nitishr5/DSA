#include<iostream>
using namespace std;
int main(){
	int i,num,sum=0;
	cout<<"Enter num";
	cin>>num;
	for(i=1;num>=i;i++)
		sum=sum+2*i-1;
		cout<<sum;

}
