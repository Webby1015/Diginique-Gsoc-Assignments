int Solution::isPalindrome(string A) {
    

    for (int i = 0; i < A.size(); i++) {
         
        if (A[i] < 'A' || A[i] > 'Z' && A[i] < 'a' || A[i] > 'z')
        {  
            
            A.erase(i, 1);
            i--;
        }
    }
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    string P = A;
 
    reverse(P.begin(), P.end());
    
    if (A == P) return 1;
    else return 0;
}
