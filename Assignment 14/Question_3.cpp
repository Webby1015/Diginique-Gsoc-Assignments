#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int n1=n;
int len=0;
    while (n1>0) {  
        n1=n1/10;
        len++;}
    for(int j=0;j<len;j++){
        
    for(int i=0;i<(n%10);i++){
        cout<<"#";
    }
        n=n/10;
        cout<<endl;
    }
}
