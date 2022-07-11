#include <bits/stdc++.h>
using namespace std;

vector<int>countsort(vector<int>original,int n){
    vector<int>sorted(n,0);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        
        if(original[i]>max) max=original[i];
        
    }
    
    vector<int>occurence(max+1,0);
    int sum=0;
    for(int i =0 ;i<n;i++){
        
        for(int j=0;j<max+1;j++){

            if(original[i]==j) occurence[j]+=1;
            
        }
    }
    for(int i=0;i<max+1;i++){
        sum+=occurence[i];
        occurence[i]=sum;
        
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<max+1;j++){
            if(original[i]==j){
                
                sorted[occurence[j]-1]=original[i];
                occurence[j]-=1;

            }
                
            
        }
    }
    return sorted;
}

int main(){
    
    int n;
    cin>>n;
    int max=INT_MIN;
    vector<int>original(n,0);
    for(int i=0;i<n;i++){
        
        cin>>original[i];
        if(original[i]>max) max=original[i];
        
    }
    vector<int>sorted=countsort(original,n);
    
    
    
    
    for(int i:sorted) cout<<i<<endl;
}
