#include <bits/stdc++.h>
using namespace std;
string X="0123456789";
int compare(string a, string b){
    int check=0;
    string a1="";
    string b1="";
    int i=0,j=0,z=0,y=0;
    if(a=="0" && b=="0") check=1;
    for(z=0; z<a.size();z++) if (a[z]!='0') break;
    for(i=z; i<a.size();i++) a1=a1+X[i];
    
    
    for(y=0; y<b.size();y++) if (b[y]!='0') break;
    for(j=y; j<b.size();j++) b1=b1+X[j];
    
    if(a1.size()>b1.size()) check=1;
    else if(i==j){
        while(i<a.size()){
        if ((a[i]-'0')>(b[i]-'0')){
            check=1;
        }
        i++;}
    }
    else if(a==b) check=1;
    
    return check;
}
int main(){
    string a,b;
    cin>>a>>b;
    if(compare(a,b)) cout<<a<<" is greater than or equal to "<<b<<" .";
    else cout<<a<<" is not greater than "<<b<<" .";
}
