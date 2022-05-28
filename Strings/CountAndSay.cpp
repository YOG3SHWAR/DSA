string Solution::countAndSay(int n) {
    if(n==1) return "1";
    if(n==2) return "11";
    
    string res="11";
    
    for(int i=3;i<=n;i++){
        string temp="";  // this will store the temporary answer
        res=res+'&';   // for the ending 
        int count=1;
        for(int j=1;j<res.size();j++){
            
            if(res[j]!=res[j-1]){
                temp=temp+to_string(count);// Because count is integer
                temp=temp+res[j-1];
                count=1;
            }
            else{
                count++;
            }
        }
        res=temp;  // finally answer will be store here for our n 
        // after when our i becomes n
    }
    return res;
}
