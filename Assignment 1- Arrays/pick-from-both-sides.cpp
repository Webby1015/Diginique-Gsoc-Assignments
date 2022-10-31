nt maxSumBothSides( vector<int> &nums, int k ) {
    vector<int> cycle;
    for( int i=k-1; i>=0; i-- )
        cycle.push_back( nums[i] );
    for( int i=n-1; i>=0 && i>n-k-1; i-- )
        cycle.push_back( nums[i] );
    int maxSum = 0;
    for( int i=0; i<k; i++ )
        maxSum += cycle[i];
    int cycleSize = cycle.size(), sum = maxSum;
    int front = 0, back = k;
    
    while( back < cycleSize ) {
        sum = sum - cycle[front] + cycle[back];
        maxSum = max( sum, maxSum );
        front++;
        back++;
    }
    return maxSum;
}
