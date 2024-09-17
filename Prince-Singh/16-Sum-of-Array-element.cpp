#include<iostream>//Sum of Array
using namespace std;
int main(){
	int arr[10],i,num,sum=0;
	
	for(i=0;i<5;i++){
		cout<<"Enter a number";
		cin>>arr[i];
			sum=sum+arr[i];
	}
	
	cout<<sum;
}
