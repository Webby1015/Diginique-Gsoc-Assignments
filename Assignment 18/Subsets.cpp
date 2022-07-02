class Solution {
public:
    vector<vector<int>> ans;
    void powerset(vector<int> nums,int i){
        int n = nums.size();
        if(i<(1<<n)){   // (1<<n) == pow(2,n)
            
            vector <int> v;
            
            for (int j = 0; j < n; j++){
                
                if (i & (1<<j)) v.push_back(nums[j]);
            }
            ans.push_back(v);
            i++;
            powerset(nums,i);
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        powerset(nums,0);
        return ans;
    }
};
