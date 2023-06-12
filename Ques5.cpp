#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    // Base case: if there is only one element in the array, return it
    if (n == 1) {
        return arr[0];
    }

    // Recursive case: find the maximum element in the remaining array
    int maxElement = findMax(arr, n - 1);

    // Compare the maximum element with the current element
    if (arr[n - 1] > maxElement) {
        return arr[n - 1];
    } else {
        return maxElement;
    }
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxElement = findMax(arr, size);

    cout << maxElement << endl;

    return 0;
}

