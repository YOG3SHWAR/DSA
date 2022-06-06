class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	if(n==0)
    	    return 0;
    	int platforms=1;
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1;
    	int j=0;
    	while(i<n && j<n){
    	    if(arr[i]>dep[j]){
    	        i++;
    	        j++;
    	    }else {
    	        i++;
    	        platforms++;
    	    }
    	}
    	return platforms;
    }
};
