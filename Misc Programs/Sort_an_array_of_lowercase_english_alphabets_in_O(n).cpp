#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>arr, int n)
{
    char temp;
	for (int i = 0; i < n;) {

		if (arr[i] == i + 1) {
			i++;
		}

		
		else {
			swap(arr[i], arr[arr[i] - 1]);
		}
	}
    
    for(int i:arr) {
        temp=i+96;
        cout<<temp<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>arr;
    char temp;
    for(int i=0;i<n;i++){
        
        cin>>temp;
        arr.push_back(temp-96);
        
    }
    
    sortArray(arr, n);

}
