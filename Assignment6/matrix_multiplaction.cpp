#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> multi(vector<vector<int>>a,vector<vector<int>>b){
    int m=a.size();
    int n=a[0].size();
    int m1=b.size();
    int n1=b[0].size();
    vector<vector<int>> result;
    if(m==n1){
    
     cout<<"\n\nMultiplacation is:\n";
    int sum;
    for(int i=0;i<m1;i++){
        vector<int>row3;
        for (int j=0;j<m1;j++){
            sum=0;
            for(int k=0; k<n1 ;k++){
                sum = sum + a[i][k] * b[k][j];
            }
            row3.push_back(sum);
        }
        result.push_back(row3);
    }}
    return result;

}

int main()
{
    int m,n,temp;
    cout<<"first Vector Dimentions :"<<"\n";
    cin>>m;
    cin>>n;
    cout<<"Input first vector :"<<"\n";
    vector<vector<int>>a;
    cout<<m<<" "<<n<<"\n";
    for(int i=0;i<n;i++){
        vector<int>row;
        for (int j=0;j<m;j++){
            cin>>temp;
            row.push_back(temp);
        }
        a.push_back(row);
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<"\n";
    }
    int m1,n1,temp1;
    cout<<"second vector Dimentions :"<<"\n";
    cin>>m1;
    cin>>n1;
    cout<<"Input Second vector :"<<"\n";
    vector<vector<int>>b;
    cout<<m1<<" "<<n1<<"\n";
    for(int i=0;i<n;i++){
        vector<int>row1;
        for (int j=0;j<m1;j++){
            cin>>temp1;
            row1.push_back(temp1);
        }
        b.push_back(row1);
    }
    for(int i=0;i<n1;i++){
        for (int j=0;j<m1;j++){
            cout<<b[i][j]<<' ';
        }
        cout<<"\n";
    }
    vector<vector<int>>w=multi(a,b);
    for(int i=0;i<w.size();i++){
        for (int j=0;j<w[0].size();j++){
            cout<<w[i][j]<<' ';
        }
        cout<<"\n";
    }
    
    
}
