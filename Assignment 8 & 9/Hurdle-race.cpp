int hurdleRace(int k, vector<int> height) {
    int max=0;
    int dose=0;
    for(int i=0;i<height.size();i++){
        
        if(max<height[i]){
            
            max=height[i];
            
        }
        
    }
    if(max>k) return max-k;
    else return 0;
}
