// sorting-3
//short the given array using insertion sort

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}    
//----
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}