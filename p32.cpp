//Arrays-3
//Check if arr is sorted or not

#include<bits/stdc++.h>
using namespace std;

    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0; i< n; i++){
            if(nums[i] > nums[(i+1)% n] )// to compare the last and first index
            {
                count ++;
            }
        }
        return (count<=1);
    }
int main(){
    int n;
        cin >> n; // Size of array
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read array elements
        }
        cout << check(arr) << "\n"; // Print the largest element
    return 0;
}