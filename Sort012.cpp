// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int one = 0;
        int two = 0;
        int zero = 0;
        for(int i = 0; i < n; i++) {
            if (a[i] == 0) zero++;
            if (a[i] == 1) one++;
            if (a[i] == 2) two++;
        }
        for(int i = 0; i < n; i++) {
            if(zero-- > 0) a[i] = 0;
            else if(one-- > 0) a[i] = 1;
            else a[i] = 2;
        }
    }
};
