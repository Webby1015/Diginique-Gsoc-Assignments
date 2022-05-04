#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a[5];
    long long max=0,min=0;
    long long sum=0;
    for(int i=0;i<5;i++){
        cin >> a[i];
        sum = sum+a[i];
        if (a[i]>max)
        {
            max=a[i];}
    }
    min=a[0];
    for(int i=0;i<5;i++){
        
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<sum-max<<" "<<sum-min;

}
