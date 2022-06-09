string Solution::multiply(string A, string B) {
    int m=A.length();
    int n=B.length();
    if(m==0||n==0||A=="0"||B=="0")
        return "0";
    if(A=="1") return B;
    if(B=="1") return A;
    int res[m+n] = {0};
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            int prod=(A[i]-'0')*(B[j]-'0');
            prod+=res[i+j+1];
            res[i+j+1]=prod%10;
            res[i+j]+=prod/10;
        }
    }
    string ans="";
    for(int i:res){
        if(ans.length()==0 && i==0) continue;
        ans+=to_string(i);
    }
    return ans;
}
