#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int max=0,c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==max){
            c=c+1;
        }
    }
    cout<<c;
}
