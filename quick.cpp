#include <bits/stdc++.h>
using namespace std;

int qs(int arr[], int low, int high) {
    int i = low;
    int j = high;
    int pivot = arr[low];
    
    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivind = qs(arr, low, high);
        quicksort(arr, low, pivind - 1);
        quicksort(arr, pivind + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n]; // Corrected array declaration
    for (int i = 0; i < n; i++) { // Added variable declaration 'i'
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    // Optionally print sorted array to verify
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}
