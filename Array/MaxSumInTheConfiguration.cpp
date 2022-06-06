int max_sum(int A[],int N)
{
//Your code here
    int sum=0;
    int wSum=0;
    for(int i=0;i<N;i++){
        sum+=A[i];
        wSum+=A[i]*i;
    }
    int ans=wSum;
    for(int i=0;i<N-1;i++){
        int curWSum = wSum + sum - N*A[N-i-1];
        ans=max(curWSum,ans);
        wSum=curWSum;
    }
    return ans;
}
