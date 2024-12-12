// Two Sum given number = [2,7,11,15]
//		target=			9
//			ans =   index 1 and 2 

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> ans;
    int start = 0, end = numbers.size() - 1;

    while(start < end) {
        int sum = numbers[start] + numbers[end];

        if(sum == target) {
            ans.push_back(start + 1);  // Add 1 to indices for 1-based index result
            ans.push_back(end + 1);
            return ans;
        }
        else if(sum < target) {
            start++;
        } else {
            end--;
        }
    }

    return ans;  // Return an empty vector if no solution is found
}

int main() {
    vector<int> numbers; // Declare an empty vector
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15); // Example input
    int target = 9;  // Example target

    vector<int> result = twoSum(numbers, target);
    
    // Output the result
    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << " are: " 
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

