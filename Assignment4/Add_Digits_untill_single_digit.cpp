class Solution {
public:
    int addDigits(int x) {
        int y=x;
        int sum = 0;
            while (x!=0){
            sum=sum+x%10;
            x=x/10;
        
        }
        if(sum>9) return addDigits(sum);
        return sum;
        
            
        }
        
};
