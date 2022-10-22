int Solution::power(string A) {
    int num=0, i=0;
    int len = A.size(); 

    while(i<len)
    {
        num = num*10+(A[i]-'0');
        i++;
    }
    
    if(num == 1) return 0; 
    
    if(num & (num-1)) return 0; 
    return 1;
}
