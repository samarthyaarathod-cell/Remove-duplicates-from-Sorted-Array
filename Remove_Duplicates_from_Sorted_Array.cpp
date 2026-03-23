#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0; // pointer for unique elements

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; // new length
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nNew length: " << newLength << endl;

    return 0;
}