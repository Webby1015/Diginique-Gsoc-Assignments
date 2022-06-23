#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    bool res=false;
    for(int i:A) if (target==i) res=true;
    
    return res;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    bool res=false;
    for(int i=0;i<A.size();i++){
    	for(int j:A[i]) if(target==j) res=true;
    }
    
    return res;
}

bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    
    bool res=false;
    for(int i:A[r-1]) if(target==i) res=true;
    
    return res;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    
    bool res=false;
    for(vector<int>i:A) if(target==i[c-1]) res=true;
    
    return res;
    
}


int main() {
	vector<int>arr={1,2,3,4,5,6,7,8,9};
	vector<vector<int>>arr2d={{1,2,3},{4,5,6},{7,8,9}};
	int target=2;
	int row=1;
	int col=2;
	//cin>>target;
	//cin>>row;
	//cin>>col;
	if(isTargetPresent(arr,target)) cout<<target<<" Found! in arr"<<endl;
	if(isTargetPresentIn2DVector(arr2d,target)) cout<<target<<" Found! in arr2d"<<endl;
	if(isTragetPresentInRow(arr2d,target,row)) cout<<target<<" Found! in arr2d(row)"<<endl;
	if(isTragetPresentInCol(arr2d,target,col)) cout<<target<<" Found! in arr2d(col)"<<endl;
	
}
