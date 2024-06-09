//hashing-1
//Frequencies of Limited Range Array Elements(gfg)
//Given an array arr[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all numbers from 1 to N. Make in-place changes in arr[], such that arr[i] = frequency(i). Assume 1-based indexing.
//Note: The elements greater than N in the array can be ignored for counting and do modify the array in-place. //

#include<bits/stdc++.h>
using namespace std;

// void frequencyCount(int arr[] ,int n,int P){
//     //Precompute:-
//     int hashh[n]={0};
//     for(int i=0; i<n; i++){
//         if(arr[i]<=n){
//         hashh[arr[i]-1] += 1;
//         }
//     }

//     //fetching
//     for(int i=0; i<n; i++){
//         swap(arr[i], hashh[i]);
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


//approach-2 (using map)
void frequencyCount(int arr[] ,int n,int P){
    unordered_map<int,int > mpp;
    //Precompute
    for(int i=0; i<n; i++){
        if(arr[i]<=n){
            mpp[arr[i]] += 1;
        }
    }
    //fething
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int P;
    cout << "Enter the value of P: ";
    cin>>P;
    frequencyCount(arr , n, P);
    return 0;
}