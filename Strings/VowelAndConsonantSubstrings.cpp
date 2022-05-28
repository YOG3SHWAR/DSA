int Solution::solve(string A) {
    long int  l = A.length();
    long int mod = 1000000007;
    int vowel =0, cons =0;
    long int sum=0;
    for(int i=0;i<l;i++){
        A[i] = tolower(A[i]);
            if(A[i]=='a' || A[i]=='e' || A[i]=='i'|| A[i]=='o'|| A[i]=='u'){
                sum = ((sum+ cons%mod)%mod);
                vowel++;
            }
            else{
                sum = ((sum+ vowel%mod)%mod);
                cons++;
            }
    }

    return sum;
}
