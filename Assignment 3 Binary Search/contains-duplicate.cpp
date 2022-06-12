class Solution {
public:
     bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> mpp;
        for(int i=0; i<nums.size(); i++)
        {
            if(mpp[nums[i]] == true)
            {
                return true;
                break;
            }
            
            else
                mpp[nums[i]] = true;
        }
        return false;
        
    }
};
