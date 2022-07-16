int pageCount(int n, int p) {
  int s=(floor((float)p/2));
    int e;

    if(n%2!=0)
        e=floor((float)(n-p)/2);
    else
        e=ceil((float)(n-p)/2);
    return min(e,s);
}
