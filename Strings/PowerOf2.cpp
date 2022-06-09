int Solution::power(string A) 
{
    string B = "2";
    while(1)
    {
        if(B.size()>A.size()) break;
        if(B==A) return 1;
        string C = "";
        int n = B.size();
        int carry = 0;
        for(int j=n-1;j>=0;j--)
        {
            int x = (B[j]-'0')*2;
            x+=carry;
            C.push_back('0'+(x%10));
            carry = x/10;
        }
        while(carry>0)
        {
            C.push_back('0'+carry%10);
            carry/=10;
        }
        reverse(C.begin(), C.end());
        B = C;
    }
    return 0;
}

int Solution::power(string A) {
  int i,n,sum,c;
  n=A.size();
  if(n==0){return 0;}
  for(i=0,sum=0;i<n;i++){sum+=(A[i]-'0');}
  if(sum==1 && n==1){return 0;}
  while(!((A[n-1]-'0')&1)){
      for(i=0,c=0;i<n;i++){
         sum=c*10+(A[i]-'0');
         A[i]=(sum/2)+'0';
         c=sum%2;
      }
  }
  for(i=0,sum=0;i<n;i++){sum+=(A[i]-'0');}
  if(sum==1){return 1;}
  return 0;
}
