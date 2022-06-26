class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> perms;
        permute(nums, 0, perms);
        return perms;
    }
private:
    void permute(vector<int> nums, int i, vector<vector<int>>& perms) {
        int temp;
        if (i == nums.size()) {
            perms.push_back(nums);
        } else {
            for (int j = i; j < nums.size(); j++) {
                if (j == i || nums[j] != nums[i]) {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    permute(nums, i + 1, perms);
                }
            }
        }
    }
};
