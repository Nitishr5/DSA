
#include <iostream>     // print in wave form
using namespace std;

int main()
{
    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]= {0,1,3,4,6,7,10,11,41,18,9,11};
    int row=3, col=4;
    
    for(int j=0;j<col;j++)
    {
        //
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        else
        {
         for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";   
        }
    }

    return 0;
}
