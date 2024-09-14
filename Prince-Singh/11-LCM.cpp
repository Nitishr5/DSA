#include<iostream>
using namespace std;

int main(){
	int n1,n2,L;
	
	cout<<"Enter two number"; //if enter 4,6
	cin>>n1>>n2;
	
	for(L=1;L<=n1*n2; L++)		// n1*n1  it in between (list common multiple) is exist in lower n1*n2
	if((L%n1==0) && (L%n2==0))	// in && operator if both condition is true  then go to break and print lcm
								//	4/1 6/1.............
		break;
		
		cout<<"LCM= "<<L;
}

//
//4      6
//8	    12
//12	18
//16	24
//20	30
//24	36
//28	42
//32	48
//36	54
//40	60
//'			in this 12 is the lest comman in both so LCM of (4,6) is = 12
//'
//'
