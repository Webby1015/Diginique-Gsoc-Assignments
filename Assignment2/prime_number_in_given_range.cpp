#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
   int c=1;
   for(int i=2;i<=sqrt(n);i++)
   {
      if(n%i == 0)
      {
         c = 0;
         break;
      }
   }
    return c;
}
int main() {
    for(int i=1;i<30;i++){
         if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
         }
         else{
            cout<<"the number "<<i<<" is not prime\n";
         }   
    }
}
