#include <bits/stdc++.h>
using namespace std;
void reverse_string(vector<char> a)
{
	char temp;
	for(int i =0,j=a.size()-1;i<a.size()/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<=a.size();i++)
	{
		cout<<a[i]<<",";
	}
}


int main() {
	vector<char>a;
	string n;
	cin>>n;
	for(int i=0;i<=n.size();i++){
		a.push_back(n[i]);
	}
	reverse_string(a);
}
