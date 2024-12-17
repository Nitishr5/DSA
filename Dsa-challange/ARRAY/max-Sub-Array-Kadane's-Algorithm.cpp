#include<iostream>  
#include<vector>    

using namespace std;  
int maxSubArraySum(int arr[], int n) {
    int maxi = INT_MIN;  
    int prefix = 0;      

    for(int i = 0; i < n; i++) {  // Loop through each element of the array
        prefix += arr[i];  // Add the current element to the prefix sum
        maxi = max(prefix, maxi);  // Update the maxi to the larger value between the current prefix sum and the previous maxi
        
        if(prefix < 0) {  // If the prefix sum becomes negative, reset it to 0
            prefix = 0;
        }
    }

    return maxi;  // Return the maximum subarray sum
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;  // Get the size of the array from the user

    int arr[n];  // Declare an array of size n

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // Input the elements of the array
    }

    // Call the maxSubArraySum function and display the result
    cout << "The maximum sum of the subarray is: " << maxSubArraySum(arr, n) << endl;

    return 0;
}

