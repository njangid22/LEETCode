class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int n = arr.length;
        int l = 0;
        int r = n-1;
        while(l<=r){
            if(arr[l]<arr[l+1]){
                l++;
            }else{
                return l;
            }
            if(arr[r]<arr[r-1]){
                r--;
            }else{
                return r;
            }
        }
        return 0;
    }
}