// sorting-6
//short the given array using recursive Insertion sort
// git init
// git add .
// git add -A
// git commit -m "sorting-6(Insertion sort)"
// git push origin master
#include<bits/stdc++.h>
using namespace std;

void recursive_insertionSort(int arr[], int i, int n){
    if(i>=n) return;
    int j=i;
    while (j>0 && arr[j-1] > arr[j])
    {
        swap(arr[j-1], arr[j]);
        j--;
    }

    recursive_insertionSort(arr, i+1, n);
    
}    
//----
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=1;
    recursive_insertionSort(arr, i, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}