// sorting-7
//short the given array using Quick sort
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Selecting the first element as the pivot
    int i = low + 1; // Pointer for elements less than pivot
    int j = high; // Pointer for elements greater than pivot

    while (true) {
        // Move the left pointer to the right until an element larger than pivot is found
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        // Move the right pointer to the left until an element smaller than pivot is found
        while (i <= j && arr[j] >= pivot) {
            j--;
        }
        // If pointers have not crossed, swap the elements
        if (i < j) {
            swap(arr[i], arr[j]);
        } else {
            break; // If pointers have crossed, break the loop
        }
    }

    // Swap the pivot element with the element at the right pointer
    swap(arr[low], arr[j]);

    // Return the partition index
    return j;
}

// Function to implement quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pivotIndex - 1); // Recursive call on left subarray
        quickSort(arr, pivotIndex + 1, high); // Recursive call on right subarray
    }
}

// Main function to input the array, sort using quicksort, and output the sorted array
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1); // Sort the array using quicksort

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
