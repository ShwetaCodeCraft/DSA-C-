//Arrays -2
//second Largest element in an array


#include <bits/stdc++.h>
using  namespace std;
    int print2largest(vector<int> &arr) {
        int slargest =-1;
        int largest = arr[0];
        for(int i= 1; i< arr.size(); i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i] > slargest){
                slargest = arr[i];
            }
        }
        return slargest;
    }


int main() {
    int t;
    cin >> t;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int ans = print2largest(arr);
        cout << ans << endl;
    return 0;
}
