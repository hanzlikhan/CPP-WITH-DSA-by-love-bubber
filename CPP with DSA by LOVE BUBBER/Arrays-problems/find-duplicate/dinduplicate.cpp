#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* num = new int[size / 2]; // Allocate memory for the num array

    int count = 0;

    for (int i = 1; i <= size; i++) { // Iterate over all possible numbers from 1 to size
        int countOccurrences = 0; // Reset count for each number

        for (int j = 0; j < size; j++) {
            if (i == arr[j]) {
                countOccurrences++;
            }
        }

        if (countOccurrences == 2) { // If the number occurs twice, store it in num
            num[count++] = i; // Store the number in num array
        }
    }

    for (int i = 0; i < count; i++) { // Iterate only up to count
        cout << num[i] << " ";
    }

    delete[] num; // Free the dynamically allocated memory

    return 0;
}