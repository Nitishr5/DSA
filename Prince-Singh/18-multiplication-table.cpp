#include<iostream>
using namespace std;
int main(){
	int num,i;
	cout<<"Enter a number want to print table ";
	cin>>num;
	
	for(i=1;i<=10;i++){
		cout<<num<<"x"<<i<<"= "<<num*i;
		cout<<endl;
	}
}
