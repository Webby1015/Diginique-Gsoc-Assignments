#include <bits/stdc++.h>
using namespace std;
void oddeven(int x) {
  if (x%2==0){
        cout<<"even"<<"\n";
    }
    else{
        cout<<"odd"<<"\n";}
}

int main() {
    char a[9][6]={"one","two","three","four","five","six","seven","eight","nine"};
    int b,c;
    cin>>b;
    cin>>c;
    for(int i=b;i<=c;i++)
    {
        if (i<=9)
        {
            cout<<a[i-1]<<"\n";
        }
    }
    for(int i=b;i<=c;i++)
    {
        if (i>9)
        {
            oddeven(i);
        }
    }
    return 0;
}
