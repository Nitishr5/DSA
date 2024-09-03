#include<iostream>
using namespace std;
int main(){
	int day;
	cin>>day;
	
	switch(day){
		case 1:    // if in switch value in char case write char value like case 1: 'a'
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thrusday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:	
		
		cout<<"Sunday";
		break;
		
		default: 
		cout<<"invaild";
	}
}
