//print star pattern like *
//						  **
//						  ***
//						  ****
//						  *****
#include<iostream>
using namespace std;
void print1(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}


//	1 2 3
//	4 5 6
//  7 8 9
void print2(int n){
	int num=1;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
}



 
//				 output--->	A B C
//							D E F
//							G H I
void print3(int n){ 
	 char num='A';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
}


//	1
//	2 2
//	3 3 3
//	4 4 4 4



void print4(int n){ 
	 
	for(int i=0;i<=n;i++){
		for(int j=1;j<=i+1;j++){
			cout<<(i+1);
		}
		cout<<endl;
	}
}




//		A
//		B B
//		C C C
//		D D D D
//		E E E E E



void print5(int n){ 
//	 	char num= 'A';
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<char ('A'+i)<<" ";
		}
		cout<<endl;
	}
}




//	1
//	12
//	123
//	1234
//	12345
	
void print6(int n){ 
	 
	for(int i=0;i<=n;i++){
		for(int j=1;j<=i+1;j++){
			cout<<(j);
		}
		cout<<endl;
	}
}


//	1
//	2 1
//	3 2 1
//	4 3 2 1
//	5 4 3 2 1

void print7(int n){ 
	 
	for(int i=0;i<=n;i++){
		for(int j=i+1;j>0;j--){
			cout<<(j);
		}
		cout<<endl;
	}
}





//	1 1 1 1
//	  2 2 2
//	    3 3
//	      4

void print8(int n){ 
	 int num=1;
	for(int i=0;i<n;i++){
		//space
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		
		//num
		for(int j=0; j<n-i; j++){
			cout<< (i+1);
		}
		cout<<endl;
	}
}



int main(){
	int n;
	cin>>n;
//	print1(n);
//	print2(n);
//	print3(n);
//	print4(n);
//	print5(n);
//	print6(n);
//	print7(n);
	print8(n);
}
