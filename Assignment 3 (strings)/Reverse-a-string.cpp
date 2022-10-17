
	
string trimfnc(string str) {
	
  int atstart = 0, atend = str.size() - 1;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] != ' ') {
      atstart = i;
      break;
    }
  }
  for (int i = str.size() - 1; i >= 0; i--) {
    if (str[i] != ' ') {
      atend = i;
      break;
    }
  }
  string fistr = "";
  for (int i = atstart; i <= atend; i++) {
    fistr += str[i];
  }
  return fistr;
}

string Solution::solve(string A) {
  if (A.size()==1) return A;
  string x="" , y="" ;
  for(int i = A.size()-1;i>=0;i--){
    
   
    if(A[i]==' ' && A[i+1]==' ' ) continue;
    if(A[i] != ' ') x=A[i]+x;
    else {
      
          y=y+ " " +x;
          x = "";
          
    }
    
    if(i==0 && A[i]!=' ') y = y + " "+x;
  }
  y=trimfnc(y);
  
  return y;
  
}
