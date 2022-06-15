#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<n;i++){
        cout<<endl;
        c=c+i;
        
        for (int j = 1; j <=c; j++){
            cout<<"#";
        }
    }
}
