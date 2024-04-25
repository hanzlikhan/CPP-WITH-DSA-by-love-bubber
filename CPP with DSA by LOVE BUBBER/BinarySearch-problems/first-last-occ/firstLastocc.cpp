#include <iostream>
using namespace std;

int findOccFirst(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1; // Initialize ans to -1, indicating key not found
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // Move to the left to find the first occurrence
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;    
    }
    return ans;
}

int findOccLast(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1; // Initialize ans to -1, indicating key not found
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1; // Move to the right to find the last occurrence
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;    
    }
    return ans;
}

int main() {
    int arr[6] = {1, 2, 3, 3, 3, 7}; // Sorted array
    int resFirst = findOccFirst(arr, 6, 3);
    cout << "First occurrence of the element is at index: " << resFirst << endl;
    int resLast = findOccLast(arr, 6, 3);
    cout << "Last occurrence of the element is at index: " << resLast << endl;
    return 0;
}
