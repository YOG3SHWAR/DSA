class Solution{
public:
    int findMin(int arr[], int n){
        return binarySearch(arr,0,n-1);
    } 
    
    int binarySearch(int arr[], int low, int high){
        if(low==high)
           return arr[low];
        int mid = (low+high)/2;
        if(arr[mid]>arr[high])
            binarySearch(arr,mid+1,high);
        else if(arr[mid]<arr[high])
            binarySearch(arr,low,mid);
 
