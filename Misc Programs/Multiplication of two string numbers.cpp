#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;
string X="0123456789";
string sum(string a, string b){
    string ans="";
    int i= a.size()-1;
    int j= b.size()-1;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int total = (a[i]-'0') + (b[j]-'0') + carry;
        
        int last_digit = total%10;
        carry = total/10;
        
        ans =ans+X[last_digit];
        i--; j--;
    }
    
    
    while(j>=0){
        int total = (b[j]-'0')+carry;
        int last_digit = total%10;
        ans = ans+X[last_digit];
        carry = total/10;
        j--;
    }
    

    while(i>=0){
        int total = (a[i]-'0')+carry;
        int last_digit = total%10;
        ans = ans+X[last_digit];
        carry = total/10;
        i--;
    }
    
    
    if(carry>0){
        ans= ans +X[carry];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

string mult(string a,string b){
    string num = "0123456789";
    
    vector<string>m;
    int i=a.size(),j=b.size();
    int x=0;
    for (int i =a.size()-1;i>=0;i--)
    {   int s=0;
        int x=0;
        string mul = "";
        for(int j=b.size()-1;j>=0;j--){
        	s =(a[i]-'0')*(b[j]-'0')+x;
            if(s>9){
                x=s/10;
                int z=s%10;
                mul=mul+num[z];
            }
            if(s<=9){ 
                x=0;
                mul=mul+num[s];}
            
            }
     if(x>0) mul=mul+num[x];
     reverse(mul.begin(),mul.end());
     m.push_back(mul);
            
    }
    for(int i =0 ;i<3;i++){
        for(int j=0; j<i;j++){
            m[i]=m[i]+num[0];
        }
    }
    int k=0;
    string bum="";
	while(k<m.size()){
		bum=sum(m[k],bum);
		k++;
    }
    return bum;
    }
    

int main(){
    string a, b;
    cin>>a>>b;
    cout<<"Product of "<<a<<" and "<<b<<" is "<<mult(a,b);
    }

