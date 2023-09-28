#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(vector<int>& nums) {
    int n = nums.size() + 1; 
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int num : nums) {
        actualSum += num;
    }

    int missingNumber = expectedSum - actualSum;
    return missingNumber;
}

int main() {
    vector<int> nums = {1, 2, 4, 5, 6};
    int missingNumber = findMissingNumber(nums);
    cout << missingNumber << endl;
    return 0;
}
