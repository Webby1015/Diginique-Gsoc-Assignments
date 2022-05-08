class Solution {
public:
    int reverse(int x) {
      int  res = 0;
        while (x!=0){
            if (res > INT_MAX/10 || res < INT_MIN/10){ /*Checking range*/
                return 0;
            }
            res = res*10+ x%10; /*Storing last digit*/
            x= x/10; /*removing last digit*/
        }
        return res;  
    }
};
