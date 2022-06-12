class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
      
        if(n==1){
            return nums[0];
        }
        if(nums[0] != nums[1]){
            return nums[0];
        }
        if(nums[n-1] != nums[n-2]){
            return nums[n-1];
        }
        
        int low = 2;
        int high = n-3;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            int midElem = nums[mid];
            
            if((nums[mid-1] != midElem) && (nums[mid+1]!= midElem) ){
                return midElem;
            }
            
            int leftCount = mid - low + 1;
            if(nums[mid-1] == midElem){

                if(leftCount%2 == 0){
                    low = mid + 1;
                }else{
                    high = mid - 2;

                }
            }else{
                if(leftCount%2 == 0){
                    high = mid - 1; 
                }else{
                    low = mid + 2;
                }
            }
        }
        
        return -1;
    }
};
