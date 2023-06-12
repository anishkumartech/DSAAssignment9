#include <iostream>
using namespace std;

long long calculateProduct(int arr[], int n) {
    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    long long product = calculateProduct(arr, size);
    cout << "Product: " << product << endl;

    return 0;
}


