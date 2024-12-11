// sort Array consisting 0 and 1. 
//mens,
//		we give Array input [1,1,0,0,1,0,1,0]
//		output-----------> [0,0,0,0,1,1,1,1]
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


void sortZeroesAndOnes(vector<int> &v){
    
    int Zero_Count=0;
    
    //counting Zeroes
    for(int ele:v){
        if(ele==0){
            Zero_Count++;
        }
    }
    
    for(int i=0;i<v.size();i++){
        if(i<Zero_Count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

int main()
{
   int n;
   cin>>n;
   
   vector<int> v;
   
   for(int i=0;i<n;i++){
       int ele;
       cin>>ele;
       v.push_back(ele);
   }
   
   sortZeroesAndOnes(v);
   
   for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }

    return 0;
}
