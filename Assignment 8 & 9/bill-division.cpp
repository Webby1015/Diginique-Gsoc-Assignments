void bonAppetit(vector<int> bill, int k, int b) {
    int count=0;
    for(int i=0;i<bill.size();i++){
        if(i!=k) count+=bill[i];
        
    }
    if(count/2==b) cout<<"Bon Appetit";
    else cout<<(b-count/2);

}
