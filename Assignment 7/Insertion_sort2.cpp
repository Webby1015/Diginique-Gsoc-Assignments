#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void insertionSort(vector <int>  ar) {
    int n = ar.size();
    for(int i=1;i<n;i++){
        int curr = ar[i];
        for(int j=i-1;j>=0;j--){
            if(ar[j]>curr){
                ar[j+1]=ar[j];
                if(j==0)
                    ar[j]=curr;
            }
            else{
                ar[j+1]=curr;
                j=-1;
            }
        }
        for(int t=0;t<n;t++)
            cout<<ar[t]<<" ";
        cout<<endl;
    }
}

int main() {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }
    insertionSort(_ar);
    return 0;
}
