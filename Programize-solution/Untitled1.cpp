#include<iostream>
using namespace std;
int main(){
int n;

cout<<"Enter month number";
cin>>n;
switch(n)
{
	case 1:
		cout<<"January= 31";
		break;
	case 2:
		cout<<"Feberuary= 28/29";
		break;
	case 3:
		cout<<"March= 31";
		break;
	case 4:
		cout<<"April= 30";
		break;
	case 5:
		cout<<"may= 31";
		break;
	case 6:
		cout<<"June= 30";
		break;
	
		case 7:
			cout<<"July= 31";
		break;
	case 8:
	cout<<"August= 31";
	break;
	
	case 9:
		cout<<"September= 30";
		break;
	case 10:
		cout<<"October= 31";
		break;
	case 11:
		cout<<"November= 30";
	break;
	case 12:
		cout<<"December= 31";
	break;
	
	default: 
	cout<<"Enter valid number";
	
}
}
