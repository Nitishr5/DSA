//3: Find the index of a specific element in an array, 
//if the element is nor present, print -1. Ask the size of the array from the user and then implement it.



#include<iostream>
using namespace std;
int main()
{
	int arr[20],size,index;
	
	cout<<"Enter Size of Array";
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter a number";
		cin>>arr[i];
	}

		for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}	
	
	cout<<"Enter element you find there index";
	cin>>index;
	
	bool found = false;

	for (int i = 0; i < size; i++) {
    if (arr[i] == index) {
        cout << "Array found on index " << i << endl;
        found = true; // Mark as found
        break; // Exit the loop if you only want the first occurrence
  		  }
			}

			if (!found) {
   				 cout << "Not found" << endl;
				}


	
	
	
}
