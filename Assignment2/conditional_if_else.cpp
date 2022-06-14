#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>a={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    if(n<=9 && n>0) cout<<a[n];
    else cout<<a[0];
}
