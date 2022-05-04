#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    float zero=0;
    float pos=0;
    float neg=0;
    int n,p;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++ ){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]==0){
            zero=zero+1;
        }
        if (a[i]>0){
            pos=pos+1;
        }
        if (a[i]<0){
            neg=neg+1;
        }}
                
        float o = zero/n;
        float po = pos/n;
        float ni = neg/n;
        cout << po << "\n" << ni << "\n" << o;
    
    }
