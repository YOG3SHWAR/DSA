// https://practice.geeksforgeeks.org/problems/find-the-frequency/1

int findFrequency(vector<int> v, int x){
    // Your code here
    int count = 0;
    for(int i: v) {
        if(i == x) ++count;
    }
    return count;    
}
