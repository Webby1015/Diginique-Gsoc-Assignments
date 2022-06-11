class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int temp;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]<nums[j]){
                    temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
        return nums;
    }
};

//Worst :O(n^2)
//Best  :O(n)
