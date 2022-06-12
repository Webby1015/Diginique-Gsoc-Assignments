class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int s = -1;
        int start = 0, end = nums.size()-1, mid;
        while(start<=end) {
            mid = start + (end-start)/2;
            if(nums[mid] == target) {
                s = mid;
                end = mid-1;
            } else if(nums[mid] < target) {
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
        
        vector<int> ans;
        for(int i=s; i<nums.size() and nums[i]==target; i++) {
            ans.push_back(i);
        }
        return ans;
    }
};
