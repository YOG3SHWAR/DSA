class Solution{
public:
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans=arr[0];
	    long long mx=arr[0];
	    long long mn=arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            long long temp=mx;
	            mx=mn;
	            mn=temp;
	        }
	        mx=max((long long)arr[i],mx*arr[i]);
	        mn=min((long long)arr[i],mn*arr[i]);
	        ans=max(mx,ans);
	    }
	    return ans;
	}
};
