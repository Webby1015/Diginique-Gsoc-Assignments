void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apl=0;
    int org=0;
    for(int i=0;i<apples.size();i++){
        
        if( a+apples[i]>=s && a+apples[i]<=t){
            apl++;
        }
        
    }
    
    for(int i=0;i<oranges.size();i++){
        
        if( b+oranges[i]>=s && b+oranges[i]<=t){
            org++;
        }
        
        
        
    }
    
    cout<<apl<<endl;
    cout<<org<<endl;
}
