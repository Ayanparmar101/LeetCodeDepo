class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end()), ans = r;

        while(l<=r){
            int mid = l + (r-l)/2;
            long long totalTime = hrRate(piles, mid);

            if(totalTime <= h) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
            
        } return ans;
    }

    long long hrRate(vector<int>& piles, int mid){
        long long totalHrs = 0;

        for(int bananas : piles) {
            totalHrs += (bananas + mid - 1) / mid;
        }
        return totalHrs;
    }
};