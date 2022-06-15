#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i=i/2){
        cout<<endl;
        
        for (int j = 1; j <=i; j++){
                cout<<"#";
        }
    }
}
