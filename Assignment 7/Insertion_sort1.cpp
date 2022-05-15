#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void insertionSort(vector <int>  ar) {
    int size = ar.size();
    int last = ar.back();
    bool test = false;
    
    if(size < 2) {
        cout << ar[0];
        return;
    }
    
    for(int i=size-2; i>=0; i--) { 
        ar[i+1] = ar[i];
        if(ar[i] <= last) {
            ar[i+1] = last;
            test = true;
        }
       
        for(int j=0; j<size; j++)
            cout << ar[j] << " ";
        cout << endl;
    
        if(test)
            break;
    }
    if(!test) {
        ar[0] = last;
        for(int j=0; j<size; j++)
            cout << ar[j] << " ";
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
