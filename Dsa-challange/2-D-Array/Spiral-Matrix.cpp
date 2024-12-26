#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Create a sample matrix for testing
    vector<vector<int> > matrix = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> result;  // Vector to store the result

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    // Traverse the matrix in spiral order
    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;  // Move down the top row

        // Traverse downwards along the right column
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;  // Move left the right column

        // Traverse from right to left along the bottom row (if there's still a row to process)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;  // Move up the bottom row
        }

        // Traverse upwards along the left column (if there's still a column to process)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;  // Move right the left column
        }
    }

    // Output the result vector containing elements in spiral order
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

