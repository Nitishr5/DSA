
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter row and cols";
    cin>>n>>m;
    // vector<vector<int> >matrix(3,vector<int>(4,1));
    vector<vector<int> >matrix(n,vector<int>(m,1)); //Take size vector size from user
    
    // for(int i=0;i<3;i++)
    // for(int j=0;j<4;j++)
    
    // cout<<matrix[i][j]<<" ";
    
    cout<<"Rows = "<<matrix.size();
    cout<<endl;
    cout<<"Cols = "<<matrix[0].size();
    
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
