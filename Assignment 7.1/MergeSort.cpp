class Solution {
public:
    void merge(vector<int>& in,vector<int>& out,int b,int m)
{
    int i = b;
    int j = b+m;

    int n = in.size();

    int e1 = min(b+m,n);
    int e2 = min(b+m+m,n);

    int k = b;
    while (i<e1 && j<e2)
    {
        if (in[i]<in[j])
        {
            out[k++] = in[i++];
        }
        else
        {
            out[k++] = in[j++];
        }
    }

    while (i<e1)
    {
        out[k++] = in[i++];
    }

    while (j<e2)
    {
        out[k++] = in[j++];
    }

}

void mergesort(vector<int>& S)
{
    int n = S.size();
    vector<int> v1(S);
    vector<int>* in = &v1;
    vector<int> v2(n);
    vector<int>* out = &v2;

    for (int m=1;m<n;m*=2)
    {
        for (int b=0;b<n;b+=2*m)
        {
            merge(*in,*out,b,m);
        }

        swap(in,out);
    }

    S = *in;
}

    
    
    
    vector<int> sortArray(vector<int>& nums) {
        
        mergesort(nums);
        
        return nums;
        
    }
};
