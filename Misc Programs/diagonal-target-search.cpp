#include <bits/stdc++.h>
using namespace std;

bool targetindiagonal(vector<vector<int>> arr, int i, int j, int target){
    bool check = 0;
    int oi=i,oj=j;
    int rsize=arr.size();
    int csize=arr.size();
    vector<int>diagonalelements={};
    diagonalelements.push_back(arr[i][j]);
    for(int i1=i-1,j1=j-1;i1>=0 && j1>=0;i1--,j1--){
        diagonalelements.push_back(arr[i1][j1]);
    }
    cout<<endl;
    
    for(int i1=i-1,j1=j+1;i1>=0 && j1<csize;i1--,j1++){
        diagonalelements.push_back(arr[i1][j1]);
    }
    cout<<endl;

    for(int i1=i+1,j1=j+1;i1<rsize && j1<csize;i1++,j1++){
        diagonalelements.push_back(arr[i1][j1]);
    }
    cout<<endl;
    
    for(int i1=i+1,j1=j-1;i1<rsize && j1>=0;i1++,j1--){
        diagonalelements.push_back(arr[i1][j1]);
    }
    cout<<endl;
    
    for(int i:diagonalelements) {
        
        if(i==target) check=1;
        
    }
    
    return check;
    
    

    
    
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},
                               {2,3,4,5},
                               {3,4,5,6},
                               {6,7,8,9}};
    
    int i,j,target;
    cin>>i;
    cin>>j;
    cin>>target;
    
    if(targetindiagonal(arr,i,j,target)){
        
        cout<<target<<" Found";
        
    }
    
    else cout<<target<<" Not found";
    
    
    
}
