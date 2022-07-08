#include<bits/stdc++.h>
using namespace std;


class Stack{
    public:
       vector <int> a;
       bool isEmpty();
       bool Top(int &top);
       void Push(int element);
       bool Pop();
};
bool Stack :: isEmpty(){
    if(a.size()==0){
        return true;
    }
    return false;
}
bool Stack :: Top(int &top){
    if(isEmpty()==true){
        return false;
    }else{
        top=a[a.size()-1];
        return true;
    }
}
void Stack :: Push(int element){
        a.push_back(element);
}
bool Stack :: Pop(){
    if(isEmpty()==true){
        return false;
    }else{
        a.pop_back();
        return true;
    }
}
