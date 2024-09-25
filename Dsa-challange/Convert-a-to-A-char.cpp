// convert lowerCase charecter 'a' to upperCase 'A'
#include<iostream>
using namespace std;
char Convert(char name)
{								// asci value of a=97 & A=65
	char ans= name-'a'+'A';		// if enter n asci value of n is 110
								//	so, 110-97+65= 78 asci value of N
	return ans;
}

int main(){
	char n;
	cout<<"Enter a charecter";
	cin>>n;
	cout<<Convert(n);
}
