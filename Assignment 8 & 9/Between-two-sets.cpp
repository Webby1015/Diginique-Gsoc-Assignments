int getTotalX(vector<int> a, vector<int> b) {
    vector<int>between;
    int total=0;
    int Aall=0;
    int Ball=0;
    for(int i =a[a.size()-1];i<=b[0];i++){
        
        between.push_back(i);
    }
    
    for(int i=0;i<between.size();i++){
        for(int j=0;j<a.size();j++){
            
            if(between[i]%a[j]!=0){
                between[i]=-1;
            }
        }
        for(int k=0;k<b.size();k++){
            if(b[k]%between[i]!=0 && between[i]!=-1){
                
                between[i]=-1;
                
            }
            
        }   
        
        
    }
    
    for(int i: between){
        
        if(i!=-1) total++;
    }
    return total;
}   
