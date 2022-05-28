class Solution{
public:
	void rearrange(int arr[], int n) {
	    // code here
	    vector <int> pos;
	    vector <int> neg;
	    for (int i = 0; i < n; i++){
	        if(arr[i] >= 0) 
                pos.push_back(arr[i]);
	        else neg.push_back(arr[i]);
        }
        int i = 0;
        int j = 0;
        for (int k = 0; k < n; k++) {
            if(i < pos.size() && k%2 == 0)
                arr[k] = pos[i++];
            else if(j < neg.size())
                arr[k] = neg[j++];
            else if(i < pos.size())
                arr[k] = pos[i++];
            else arr[k] = neg[j++];
        }
    }
};
