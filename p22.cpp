//hashing-2
//find the highest and lowest frequency element

#include<bits/stdc++.h>
using namespace std;

void frequencyCount(int arr[] ,int n){
    //Precompute:-
    unordered_map<int , int > mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]] += 1;
    }

    int minFreq = n, minEle=0, maxFreq=0, maxEle=0;

    for(auto it: mpp){
        int element = it.first;
        int count = it.second;

        if(count < minFreq){
        minEle = element;
        minFreq = count ;
        }

        if(count > maxFreq){
          maxEle =   element;
          maxFreq = count ;
        }
    }

    cout<<"maximum frequency element :- "<<maxEle<<endl ;
    cout<<"minimum frequency element :- "<<minEle;
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
    frequencyCount(arr, n);

    return 0;
}