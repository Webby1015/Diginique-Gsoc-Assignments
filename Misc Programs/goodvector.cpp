#include<bits/stdc++.h>
using namespace std;

bool isGoodVector(vector<int>A){
	vector<int> Good = {1,3,2};
	if(A.size()!=Good.size()) return 0;
	for(int i=0;i<A.size();i++){
		if(A[i]!=Good[i]) return 0;
	}
	return 1;
}
bool isTargertPreceding(vector<int> A,int j){
    for(int i=0;i<A.size();i++){
        if(A[i]==j) return false;
    }
    return true;
}

void print(vector<int>A){
	cout<<"{";
	for(int a:A) cout<<a<<",";
	cout<<"}\n";
}


void recursion(vector<int> A,int i){
	cout<<"Called recursion for: i: "<<i<<" A:"; 
	print(A);
    if(i==A.size()){
        if(isGoodVector(A)){
        	cout<<"\n \n ans: ";
            print(A);
        }
        return;
    }

    if(A[i]!=-1) {
    	recursion(A,i+1);
    	return;
    }

    for(int j=1;j<=A.size();j++){
    	cout<<"i: "<<i<<" j: "<<j<<" ";
        if(isTargertPreceding(A,j)){
        	cout<<"as j is not present in array so changing A["<<i<<"] to "<<j<<"\n"; 
            A[i] = j;
            recursion(A,i+1);
        }
        else {
        	cout<<"as j is present in Array So moving ahead\n";
        }
    }
}

int main(){
	recursion({1,-1,-1},0);
}
