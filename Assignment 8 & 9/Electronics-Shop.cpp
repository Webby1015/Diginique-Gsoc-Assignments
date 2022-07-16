int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max=-1;
    vector<int>prices;
    for(int i=0;i<keyboards.size();i++){
        
        for(int j=0;j<drives.size();j++){
            
            int sum=keyboards[i]+drives[j];
            if(sum<=b) prices.push_back(sum);
            
        }
        
    }
    
    for(int i:prices) if(max<i) max=i;
    return max;
}
