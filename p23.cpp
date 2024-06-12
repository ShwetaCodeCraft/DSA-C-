// sorting -1
//short the given array using selection sort

#include<bits/stdc++.h>
using namespace std;

//STANDARD APPROACH (take only n-1 no of swaps)
void selection_sort(int arr[], int n){
    for(int i=0;  i<=n-2; i++){
        int mini=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}


//NOT A STANDARD APPROACH( takes unnacessary no of swapings)
// void selection_sort(int arr[], int n){
//     for(int i=0; i<=n-2; i++){
//         for(int j=i+1; j<=n-1; j++){
//             if(arr[j]<arr[i]){
//                 swap(arr[j], arr[i]);
//             }
//         }
//     }
// }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}