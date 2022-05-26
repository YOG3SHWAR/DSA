// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#

// solution 1
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++)
            map[array[i]] = 1;
        for(int i = 1; i < n; i++) {
            if(map.find(i) == map.end())
                return i;
        }
        return n;
    }
};

// solution 2

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = 0;
        for(int i: array)
            sum += i;
        return (n * (n+1)/2) - sum;
    }
};
