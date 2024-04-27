#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != 0) {
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }
};

int main() {
    Solution obj; // Create an object of the Solution class

    vector<int> nums;
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);

    obj.moveZeroes(nums);

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}