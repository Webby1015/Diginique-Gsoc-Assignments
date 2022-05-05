#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	for (int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0){
			return 0;
	}}
	return 1;
}
int main(){
	int s,c=0,l;
	cin>>s;
	for(int i=2;i<s;i++){
		l=isprime(i);
		if(l==1){
			c++;
		}}
	cout<<c;
}
