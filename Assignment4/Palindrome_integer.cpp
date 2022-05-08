class Solution {
public:
    bool isPalindrome(int x) {
        int res=0;
        int y =x;
            while(x>0){
                if (res > INT_MAX/10 || res < INT_MIN/10){
                return 0;
            }
                res = res*10+ x%10;
                x= x/10;
            }
        if(res==y) return true;
        else return false;
    }
};
