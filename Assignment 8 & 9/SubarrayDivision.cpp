int birthday(vector<int> s, int d, int m) {
    int count=0;
    
    for(int i = 0;i<s.size();i++){
        int countday=0;
        for(int j = i;j<i+m;j++){
            countday+=s[j];
            
        }
        cout<<endl;
        if(countday==d) count++;
    }
    
    return count;
}
