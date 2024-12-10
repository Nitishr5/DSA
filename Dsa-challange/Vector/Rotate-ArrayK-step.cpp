#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	int k=2;
	k=k%v.size();
	
	reverse(v.begin(), v.end());
	reverse(v.begin(), v.begin() + k);
	reverse(v.begin() + k, v.end());
	
//	for(int a:v)	{       // this loop is not support in this Devc++ ,
						    //  so use for loop
//		cout<<a<<" ";
//		
//	}

	 for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";  // Print each element
    }
    cout << endl;


	cout<<endl;
}
