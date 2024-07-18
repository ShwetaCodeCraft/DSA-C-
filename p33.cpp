//Array-4
//Remove duplicates from sorted array

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[j]){
                nums[j+1] = nums[i];
                j++;
            }
        }
        return (j+1);
    }
int main(){
    int n;
        cin >> n; // Size of array
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read array elements
        }
        cout << removeDuplicates(arr) << "\n"; // Print the largest element
    return 0;
}