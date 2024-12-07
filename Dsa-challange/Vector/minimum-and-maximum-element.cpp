#include <iostream>
#include <vector>
#include <algorithm>  // For std::max_element and std::min_element

using namespace std;

int main() {
    // Example vector
    vector<int> arr = {5, 4, 1, 2, 3};

    // Find the maximum element using std::max_element
    auto max_elem = *max_element(arr.begin(), arr.end());

    // Find the minimum element using std::min_element
    auto min_elem = *min_element(arr.begin(), arr.end());

    // Output the maximum and minimum elements
    cout << "Maximum element: " << max_elem << endl;
    cout << "Minimum element: " << min_elem << endl;

    return 0;
}

