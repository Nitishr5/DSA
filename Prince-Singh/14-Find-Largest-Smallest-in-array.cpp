#include<iostream>
using namespace std;
int main(){
	int arr[30],i,max=0,min;
	
	
	for(i=0;i<5;i++){
		cout<<"Enter a number";
		cin>>arr[i];
	}
	
	cout<<"Array element are "<<endl;
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
		
		
		
		if(arr[i]>max)// find the maximum number of array
		max=arr[i];
		
	
		min=arr[0];//  or use arr[i]<INT_MAX	//Find the minimum number of array
		if(arr[i]<min){
			min=arr[i];
		}
			
	}
	
	cout<<"max is "<<max;
	
	cout<<"Minimum Number is "<<min;
	
	
	
}
