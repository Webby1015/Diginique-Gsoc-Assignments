string kangaroo(int x1, int v1, int x2, int v2) {
    int vmin;
    int xmin;
    int vmax;
    int xmax;
    string result="NO";
    if(x1>x2) {
        vmax = v1;
        xmax = x1;
        vmin = v2;
        xmin = x2;
    }
    else{
     
     vmax = v2;
     xmax = x2;
     vmin = v1;
     xmin = x1;
        
    }
    
    while(xmin<=xmax){
        xmin+=vmin;
        xmax+=vmax;
        if(xmin==xmax){
            result = "YES";
            
        }
    }
    
    return result;
    
}
