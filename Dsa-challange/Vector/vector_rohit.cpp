#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//create vector, declare
	vector<int>V;
	//size and capacity
	cout<<"Size of vector"<<V.size()<<endl;
	cout<<"Capacity of vector "<<V.capacity()<<endl;
	V.push_back(2);
	cout<<"Size of V: "<<V.size()<<endl;
	cout<<"Capacity of V:"<<V.capacity()<<endl;
}
