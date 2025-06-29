#include<iostream>
using namespace std;

int main(){
	

int num,sum=0;

	cout<<"Enter a number";
	cin>>num;
	while(num!=0){
		sum=sum+num%10;
		num=num/10;
	}
	cout<<"Sum= "<<sum;
	
}




2nd Way to solve this Question


#include<iostream>
using namespace std;

int main()
{
    int num;
    
    cout<<"Enter a number";
    cin>>num;
   int rem,rev=0;
   while(num!=0)
   {
       
   rem=num%10;
   rev=rev+rem;
   num=num/10;
   }
   cout<<rev;
  
}
