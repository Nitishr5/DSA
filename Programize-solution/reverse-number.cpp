
//Reverse number given by user=  7483 = 3847 output

#include<iostream>
using namespace std;

int main(){
	int num,rem,rev=0,temp=0;
	
	cout<<"Enter a number";
	cin>>num;
while(num!=0){
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}

cout<<"Total digit of number is "<<rev;
	
}
