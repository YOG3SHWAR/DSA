#define mod 10003
int Solution::solve(string A) {
    int n = A.length();
    int i, count=0;
    for(i = 0; i < n; i++) {
        switch(A[i]) {
            case 'a': count = (count + n - i) % mod; break;
            case 'e': count = (count + n - i) % mod; break;
            case 'i': count = (count + n - i) % mod; break;
            case 'o': count = (count + n - i) % mod; break;
            case 'u': count = (count + n - i) % mod; break;
            case 'A': count = (count + n - i) % mod; break;
            case 'E': count = (count + n - i) % mod; break;
            case 'I': count = (count + n - i) % mod; break;
            case 'O': count = (count + n - i) % mod; break;
            case 'U': count = (count + n - i) % mod; break;
        }
    }
    return count;
}
