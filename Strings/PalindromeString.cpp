int Solution::isPalindrome(string A) {
    string B = "";
    for(char i: A)
        if((i >= 'a' && i<='z') || (i >= 'A' && i<='Z') || (i >= '0' && i <= '9'))
            B += i;
    string temp = B;
    reverse(temp.begin(), temp.end());
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    transform(B.begin(), B.end(), B.begin(), ::tolower);
    if(temp == B)
        return 1;
    return 0;
}
