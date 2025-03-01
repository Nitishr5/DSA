#include<iostream>
using namespace std;
int main(){
	int num,count=0;
	
	cout<<"Enter a number";
	cin>>num;
	
	for(int i=1;i<=num;i++)
		if(num%i==0)
		count++;
		
		if(count==2){
			cout<<"Prime number";
		}
		else{
			cout<<"Not-Prime";
		}
		
		
}





















#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n <= 1) {
        cout << "Not-Prime";
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {  // Loop up to sqrt(n)
        if (n % i == 0) {
            cout << "Not-Prime";
            return 0;  // No need to check further if it's already not prime
        }
    }
    
    cout << "Prime";  // If no divisors found, it must be prime
}

