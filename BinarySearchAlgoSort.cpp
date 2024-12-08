// WAP to implement a binary search alogrithm on an array by asking the user for the length and the elements of the array 
//and then sorting the array while inserting the elements by repetativly dividing the array into halves and then ask the user about what number they need to search and then return the index at which the number is present and if element is not there then say element not found


#include <iostream>
using namespace std;


int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        

        if (arr[mid] == key)
            return mid;
        

        if (arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }
    

    return -1;
}


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, key;
    

    cout << "Enter the length of the array: ";
    cin >> n;
    
    int arr[n];
    

    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Enter the number to search: ";
    cin >> key;
    

    int result = binarySearch(arr, n, key);
    

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
