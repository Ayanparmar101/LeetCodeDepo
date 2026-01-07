class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1; 
        int high = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while(low <= high){
            int mid = low + (high-low)/2;
            if(divSum(nums, threshold, mid)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }return ans;
    }

    bool divSum(vector<int>& nums, int threshold, int mid){
        long long k = 0;

        for(int numbers : nums){
            k += (numbers + mid - 1)/mid;
        }
        return k<=threshold;
    }
};