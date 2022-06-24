#include<bits/stdc++.h>
using namespace std;

vector<bool> A;
void printA(){
   for(bool a: A) cout<<a<<" ";
   cout<<endl;
}
void recursion(string X, string Y){
     if (X.size()==Y.size()) 
    {
        cout<<X<<endl;
        return; 
    }
    for (int i = 0;i<Y.size();i++){
        if(A[i]==false){
            A[i]= 1;
            cout<<"Calling Recursion for string: "<<X+Y[i]<<"      A: ";
            printA();
            recursion(X+Y[i],Y);
            A[i]=0;
            cout<<"After Executing Recursion for string: "<<X+Y[i]<<"         A: ";
            printA();
        }
    }
}

int main(){
    string a="abc";
    A.resize(a.size());
    recursion("",a);
}
