class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int t=*min_element(nums.begin(),nums.end());
         vector<int> res(*max_element(nums.begin(),nums.end())-t+1);
        for(int i=0;i<nums.size();i++)
            res[nums[i]-t]++;
        nums.clear();
        for(int i=0;i<res.size();i++)
        {
            if(res[i]!=0)
            {
                while((res[i]--)!=0)    
                nums.push_back(i+t);
            }
        }
      return nums;      
    }
};
