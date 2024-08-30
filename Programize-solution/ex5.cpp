//Write a program that accept marks in five subjects and calculate and calculate the total percent marks.


#include<iostream>
using namespace std;

int main(){
	int math,sci,comp,gk,sst,total;
	float percent;
	
	cout<<"Enter marks of 5 subject";
	cin>>math>>sci>>comp>>gk>>sst;
	
	total= math+sci+comp+gk+sst;
	percent= total/5;
	
	cout<<" Total marks is = "<<total<<endl;
	cout<<" Total percent is = "<<percent<<"%";
}
