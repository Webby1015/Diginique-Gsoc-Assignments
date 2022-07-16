int migratoryBirds(vector<int> arr) {
    int max=0;
    int maxocr=0;
    int id;
    for(int i=0;i<arr.size();i++){
        if(max<arr[i]) max=arr[i];
    }
    vector<int>ocr(max+1,0);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<max+1;j++){
            
            if(arr[i]==j) ocr[j]++;
            if(maxocr<ocr[j]) {
                maxocr=ocr[j];
            }    
        }
        
    }
    for(int i=0;i<max+1;i++){
        
        if(ocr[i]==maxocr){
            id=i;
            break;
        }
        
    }
    
    return id;
}
