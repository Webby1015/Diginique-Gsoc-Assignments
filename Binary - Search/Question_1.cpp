class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int leftPos = getLeft(nums, target, 0, nums.size() - 1);
        int rightPos = getRight(nums, target, 0, nums.size() - 1);
        return vector<int>{leftPos, rightPos};
    
    }
    
    int getLeft(vector<int>& nums, int& target, int start, int end) {
        
        if(start > end) {
            return -1;
        
        }
        
        int mid = start + (end - start) / 2;
        
        if(nums[mid] >= target) {
            
            if(nums[mid] == target && (mid == 0 || nums[mid - 1] != nums[mid])) {
                return mid;
            
            }
            
            return getLeft(nums, target, start, mid - 1);
        } 
        
        else {
            return getLeft(nums, target, mid + 1, end);
        }
        
    }
    
    int getRight(vector<int>& nums, int& target, int start, int end) {
        
        if(start > end) {
            
            return -1;
        
        }
        
        int mid = start + (end - start) / 2;
        if(nums[mid] <= target) {
            
            if(nums[mid] == target && (mid == nums.size() - 1 || nums[mid + 1] != nums[mid])) {
                
                return mid;
                
            }
            return getRight(nums, target, mid + 1, end);
            
        } 
        else {
            
            return getRight(nums, target, start, mid - 1);
        
        }
    }
};
