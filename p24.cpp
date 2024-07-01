// sorting -2
//short the given array using bubble sort

#include<bits/stdc++.h>
using namespace std;

//STANDARD APPROACH (take only n-1 no of swaps)
// void bubble_sort(int arr[], int n){
//     for(int i=n-1;  i>=1; i--){
//         for(int j=0; j<=i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }






//-------OR---



void bubble_sort(int arr[], int n){
        for(int j=0; j<=n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        bubble_sort(arr, n-1);
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubble_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}