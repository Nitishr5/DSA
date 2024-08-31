
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






//other way to reversr number it is simple------------------------------------------------------------>

int main(){
	int num;	
	cout<<"Enter a number";
	cin>>num;
while(num>0){
	int dig = num%10;
	num= num/10;
	
	cout<<dig;
}


	
}

