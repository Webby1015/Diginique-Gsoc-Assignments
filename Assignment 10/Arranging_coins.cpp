class Solution {
public:
    int arrangeCoins(int n) {
        long start = 0;
        long end = n;
        long ans;
        
        while(start <= end) {
            ans = start + (end-start)/2;
            if(ans*(ans+1)/2 == n) return (int)ans;
            else if(ans*(ans+1)/2 < n) start = ans+1;
            else end = ans-1;
        }
        return (int)end;
    }
};   


