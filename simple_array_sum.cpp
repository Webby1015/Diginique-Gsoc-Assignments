#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n;
    cin>>n;
    int p;
    int a[n];
    int sum;
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    for(int i = 0; i<n;i++){
        sum = sum +a[i];
        
    }
    cout<<sum;
    return 0;
}
