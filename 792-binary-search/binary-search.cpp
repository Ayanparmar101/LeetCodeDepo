class Solution {
public:
    int search(vector<int> &nums, int target) {
        return bS(nums, 0, nums.size() - 1, target);
    }

    int bS(vector<int> &nums, int low, int high, int target) {
        if (low > high) return -1;

        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            return bS(nums, mid + 1, high, target);
        else
            return bS(nums, low, mid - 1, target);
    }
};
