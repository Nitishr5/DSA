 //This is subfix program this run in other editor 
 // output for this program  ====> {22,16,12,7,10,8} 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector <int> arr = {6,4,5,-3,2,8};
	
	vector <int> postfix(arr.size());
	
    //  postfix[0]=arr[arr.size()-1];   
     postfix[arr.size() - 1] = arr[arr.size() - 1];

     
	for(int i=arr.size()-2;i>=0;i--)
	
// 	arr[i]=arr[i-1]+prifix[i];

    postfix[i]=postfix[i+1]+arr[i];
	
	
	for(int i=0;i<arr.size();i++)
	{
	    cout<<postfix[i]<<" ";
	}
}
