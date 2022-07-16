int utopianTree(int n) {
    int h=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            h++;
        else {
            h*=2;
        }
    }
    return h;
}
