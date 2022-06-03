class Solution {
public:
    vector<int> factorial(int N){
        vector<int> v,v1;
        v.push_back(1);
        long long num,carry=0;
        for(int i=1;i<=N;i++){
            carry=0;
            for(int j=v.size()-1;j>0;j--){
                num=v[j]*i+carry;
                v1.push_back(num%10);
                carry=num/10;
            }
            long long a=v[0]*i+carry;
            while(a>=10){
                v1.push_back(a%10);
                a=a/10;
            }
            v1.push_back(a);
            v.clear();
            reverse(v1.begin(),v1.end());
            v=v1;
            v1.clear();
        }
        return v;
    }
};
