class Solution {
public:

int maxSubArray(vector<int>& nums) {
    int sum=0;
    int max_sum=INT_MIN;
    for(int j=0;j<nums.size();j++)
    {
        sum+=nums[j];
        if(max_sum<sum)
            max_sum=sum;
        if(sum<0)
        sum=0;     
    }
  return max_sum;
    
}
};
