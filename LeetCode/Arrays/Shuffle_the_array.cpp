#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0;

        while (i < n) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
            i++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> result = sol.shuffle(nums, n);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
