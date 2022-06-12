class Solution {
public:
    int guessNumber(int n) {
        int l=1,h=n,mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==-1)
                h=mid-1;
            else if(guess(mid)==1)
                l=mid+1;
        }
        return 0;
    }
};
