#include <bits/stdc++.h>

using namespace std;
int tallcandles(int a[],int n){
    
    int max=0,c=0;
    for(int i=0;i<n;i++) if(max<a[i]) max=a[i];  
    for(int i=0;i<n;i++) if(max==a[i]) c++;
        

    return c;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<tallcandles(a,n);
}
