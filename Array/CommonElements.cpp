// https://practice.geeksforgeeks.org/problems/common-elements1132/1#

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector <int> ans; 
            map <int, int> map;
            for(int i = 0; i < n1; i++)
                if(map[A[i]] == 0)
                    map[A[i]]++;
            for(int i = 0; i < n2; i++)
                if(map[B[i]] == 1)
                    map[B[i]]++;
            for(int i = 0; i < n3; i++)
                if(map[C[i]] == 2)
                    map[C[i]]++;
            for(auto i: map) {
                if(i.second == 3)
                    ans.push_back(i.first);
            }
            return ans;
        }
};
