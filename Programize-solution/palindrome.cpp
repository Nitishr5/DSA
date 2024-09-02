#include<iostream>
using namespace std;
int main(){
	int num,pal,rev=0,temp=0,rem;
	
	cout<<"Enter a nmber";
	cin>>num;
	temp=num;
	while(num!=0){
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
cout<<rev<<endl;
cout<<num;
if(temp==rev){
	cout<<"Palindrome";
}
else{
	cout<<"Not-palindrome";
}

}
