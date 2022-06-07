string Solution::addBinary(string A, string B) {
    string res;
    int i = A.length()-1, j = B.length()-1;
    int carry = 0;
    while(i >= 0 || j >= 0){ 
        int sum = carry;
        if(i >= 0) sum+= A[i--] - '0'; 
        if(j >= 0) sum+= B[j--] - '0'; 
        carry = (sum > 1)? 1:0;
        res+= to_string(sum%2);
    }
    if(carry) res+='1';
    reverse(res.begin(), res.end());
    return res;
}
