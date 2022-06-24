#include <bits/stdc++.h>
using namespace std;

//print all the subsequence of the string A
void recursion(string A, int i, string x)
{
	if(i==A.size()) return;
	//picking up
	cout<<x+A[i]<<"\n";
	recursion(A,i+1,x+A[i]);
	recursion(A,i+1, x);
}
int main() {
	recursion("abc", 0, "");
}
