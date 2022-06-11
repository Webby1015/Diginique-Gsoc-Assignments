class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int n=nums.size();
        int temp=0;
        int in;
        
        for(int j=0;j<n;j++){
            
            int c=INT_MAX;
            
            for(int i=j;i<n;i++){
                
                if(c>nums[i]) {
                    c=nums[i];
                    in=i;
                }
            }
            
            temp=nums[j];
            nums[j]=c;
            nums[in]=temp;
            
        }
        
        return nums;
    }
};

//time complexity Best  :Ω(n^2)
//                Worst :O(n^2)
