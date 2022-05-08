class Solution {
public:
    int subtractProductAndSum(int x) {
        int pro = 1;
        int sum = 0;
        while (x!=0){
            pro=pro*(x%10);
            sum=sum+x%10;
            x=x/10;
        }
        return pro - sum;
        
    }
};
