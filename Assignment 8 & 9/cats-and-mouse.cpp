string catAndMouse(int x, int y, int z) {
     string result;
     if(abs(x-z)==abs(z-y)) result="Mouse C";
     if(abs(x-z)<abs(z-y)) result="Cat A";
     if(abs(x-z)>abs(z-y)) result="Cat B";
     
     return result;
     

}
