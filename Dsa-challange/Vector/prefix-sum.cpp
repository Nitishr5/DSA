//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    // Original array
//    vector<int> arr = {5, 4, 1, 2, 3};
//
//    // Size of the array
//    int n = arr.size();
//
//    // Array to store the prefix sums
//    vector<int> prefix_sum(n);
//
//    // Compute the prefix sum array
//    prefix_sum[0] = arr[0];  // First element is the same
//    for (int i = 1; i < n; i++) {
//        prefix_sum[i] = prefix_sum[i - 1] + arr[i];  // Sum up the current element with the previous prefix sum
//    }
//
//    // Output the prefix sum array
//    cout << "Prefix sum array: ";
//    for (int i = 0; i < n; i++) {
//        cout << prefix_sum[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}









// if previous not support in Dev c++ use this way 


#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Explicitly creating the vector using the push_back() method
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    // Size of the array
    int n = arr.size();

    // Array to store the prefix sums
    vector<int> prefix_sum(n);

    // Compute the prefix sum array
    prefix_sum[0] = arr[0];  // First element is the same
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];  // Sum up the current element with the previous prefix sum
    }

    // Output the prefix sum array
    cout << "Prefix sum array: ";
    for (int i = 0; i < n; i++) {
        cout << prefix_sum[i] << " ";
    }
    cout << endl;

    return 0;
}

