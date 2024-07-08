// sorting-5
//short the given array using recursive Bubble Sort


#include<bits/stdc++.h>
using namespace std;

void recursive_bubbleSort(int arr[], int n){
    if(n==1) return ;
    for(int j=0; j<n; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j+1], arr[j]);
        }
    }
    recursive_bubbleSort(arr, n-1);
}    
//----
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    recursive_bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}