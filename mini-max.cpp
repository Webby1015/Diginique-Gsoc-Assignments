#include <bits/stdc++.h>
using namespace std;

void mini_max(vector<long>a){
    vector<long>sum;
    
    int size = a.size();
    for(int i=0;i<size;i++){
    
        long temp=0;
        for(int j=0;j<size;j++){
            {
                temp+=a[j];
            }
        }
        temp=temp-a[i];
        sum.push_back(temp);
    }
    //for(long i:sum) cout<<i<<" ";
    long min=INT_FAST32_MAX;
    long max=INT_FAST32_MIN;
    //cout<<min<<endl;
    for(long i:sum){
        if(min>i) min=i; //cout<<min<<" ";
        if(max<i) max=i;
    }
    cout<<min<<" "<<max;
}

int main(){
    vector<long> a;
    long temp;
    for(int i=0;i<5;i++){
        cin>>temp;
        a.push_back(temp);
    }
    mini_max(a);
    //cout<<endl<<"2390411747 3107767877";
}
