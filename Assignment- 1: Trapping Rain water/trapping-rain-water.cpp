class Solution {
public:
    int trap(vector<int>& a) {
        int n=a.size();
        int leftmax=0,rightmax=0;
        int left=0, right=n-1;
        int totalwater=0;
       while(left<right){
           if(a[left]<=a[right]){
               leftmax=max(leftmax,a[left]);
               totalwater+=(leftmax-a[left]);
               left++;
           }
           else{
               rightmax=max(rightmax,a[right]);
               totalwater+=(rightmax-a[right]);
               right--;
           }
       }
        return totalwater;
    }
};
