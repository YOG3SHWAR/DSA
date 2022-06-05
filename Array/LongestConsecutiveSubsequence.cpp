class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        int count=1;
        unordered_map<int,bool> map;
        for(int i=0;i<N;i++){
          map[arr[i]]=true;
        }
        for(int i=0;i<N;i++){
            int curCount=0;
            int j=0;
            if(map.find(arr[i]-1)==map.end()){
                while(map.find(arr[i]+j)!=map.end()){
                    curCount++;
                    j++;
              }
            count=max(count,curCount);
            }
        }
        return count;
    }
};
