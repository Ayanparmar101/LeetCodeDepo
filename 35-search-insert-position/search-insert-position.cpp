class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;  // default insert position

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                ans = mid;        // potential insert pos
                high = mid - 1;   // try to find earlier
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
