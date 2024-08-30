
//count the number input by user ex- 342543 = 6 give output

#include<iostream>
using namespace std;

int main(){
	int num,count=0;
	
	cout<<"Enter a number";
	cin>>num;
while(num!=0){
	num= num/10;
	count++;
}

cout<<"Total digit of number is "<<count;
	
}
