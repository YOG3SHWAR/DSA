// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count = 0;
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++) {
            if(map.find(a[i]) == map.end()) {
                count++;
                map[a[i]] = 1;
            }
        }
        for(int i = 0; i < m; i++) {
            if(map.find(b[i]) == map.end()) {
                count++;
                map[b[i]] = 1;
            }
        }
        return count;
    }
};
