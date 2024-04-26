#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int k, int mid); // Forward declaration

int aggressiveCow(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < arr.size(); i++) {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, k, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

bool isPossible(vector<int> arr, int k, int mid) {
    int lowCount = 1;
    int lstPos = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] - lstPos >= mid) {
            lowCount++;
            if (lowCount == k) {
                return true;
            }
            lstPos = arr[i];
        }
    }
    return false;
}

int main() {
    vector<int> arr = {4, 2, 1, 3, 6};
    cout << aggressiveCow(arr, 2);
    return 0;
}
