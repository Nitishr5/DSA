
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x,ans=0;
    cin>>x;
    while(x!=0){
            int digit = x%10;
            
         ans=ans + digit;
            x=x/10;
        }
        
        cout<<ans;
    return 0;
}

