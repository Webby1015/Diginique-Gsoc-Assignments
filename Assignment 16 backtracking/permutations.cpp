class Solution {
private:
    void recursion(vector<int> nums,int i,vector<vector<int>> &ans)
    {
        
        int temp;
        
        
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j=i;j<nums.size();j++){
            
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            
            recursion(nums,i+1,ans);
            
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int i=0;
        
        recursion(nums,i,ans);
        return ans;
    }
};
