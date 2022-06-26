class Solution {
public:
    
    void solve(int index,int n,string s,vector<string> &ans){
        
        if(index==n){
            ans.push_back(s);
            return;
        }
        
        char c=s[index];
        isupper(s[index])? c=tolower(s[index]) : c=toupper(s[index]);
        solve(index+1,n,s,ans);
		
        if(isalpha(s[index])){
            s[index]=c;
            solve(index+1,n,s,ans);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
       vector<string> ans;
        int n=s.size();
        solve(0,n,s,ans);
        return ans;
    }
};
