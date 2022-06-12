class Solution {
public:
    bool isok(int mid,vector<int>&nums,int m){
        int sum=0,cnt=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                sum=nums[i];
                if(sum>mid) return false;
                cnt++;
            }
        }
        return cnt<=m;
    }
    int splitArray(vector<int>& nums, int m) {
        int l=0,r=1e9,ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isok(mid,nums,m)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
