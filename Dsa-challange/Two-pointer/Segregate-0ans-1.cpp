#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 0, 1, 1, 0};  // Array initialization
    int n = 5, start = 0, end = n - 1;  // Length of array and pointers
    
    while (start < end)
    {
        if (arr[start] == 0) {
            start++;  // Move start forward if it's already 0
        } else {
            if (arr[end] == 0) {
                swap(arr[start], arr[end]);  // Swap if arr[end] is 0
                start++;
                end--;
            } else {
                end--;  // Decrease end pointer if it's 1
            }
        }
    }
    
    // Print the rearranged array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print array elements separated by space
    }
    cout << endl;  // Newline for better output formatting
    
    return 0;
}

