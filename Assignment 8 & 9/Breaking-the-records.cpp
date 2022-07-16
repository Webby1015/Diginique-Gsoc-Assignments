vector<int> breakingRecords(vector<int> scores) {
    int max=scores[0];
    int maxcount=0;
    int min=scores[0];
    int mincount=0;
    for(int i=0;i<scores.size();i++){
        
        if(scores[i]>max){
            max=scores[i];
            maxcount++;
        }
        if(scores[i]<min){
            min=scores[i];
            mincount++;
        }
        
    }
    vector<int>result={maxcount,mincount};
    return result;
}
