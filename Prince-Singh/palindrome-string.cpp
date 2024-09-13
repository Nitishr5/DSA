#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a charecter";
	cin>>str;
	
	string reversestring= str;
 reverse(reversestring.begin(), reversestring.end());

		if(str==reversestring){
			cout<<"Palindrome";
		}
		else{
			cout<<"Not-palindrome";
		}
	
	
}
