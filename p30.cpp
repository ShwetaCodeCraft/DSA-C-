#include <bits/stdc++.h>
using namespace std;

int largest(const vector<int> &arr, int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
        int n;
        cin >> n; // Size of array
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read array elements
        }
        cout << largest(arr, n) << "\n"; // Print the largest element
    return 0;
}
