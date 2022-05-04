#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a<<b<<"\n";
    char i;
    i=a[0];
    a[0]=b[0];
    b[0]=i;
    cout<<a<<" "<<b;
    return 0;
}
