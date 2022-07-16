int sockMerchant(int n, vector<int> ar) {
    int max=0;
    int count=0;
    for(int i=0;i<n;i++){
        
        if(max<ar[i]) max=ar[i];
        
    }
    
    vector<int>ocr(max+1,0);
    for(int i=0;i<n;i++){
        
        ocr[(ar[i])]++;
        
    }
    
    for(int i:ocr){
        count=count+(i/2);
    }
    return count;
}
