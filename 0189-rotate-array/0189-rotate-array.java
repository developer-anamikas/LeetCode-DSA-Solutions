class Solution {
    public void rotate(int[] arr, int d) {
        int n=arr.length;
        d=d%n;
        reverse(arr,0,n-d-1);
        reverse(arr,n-d,n-1);
        reverse(arr,0,n-1);
    }
    public static void reverse(int[] arr, int i, int j){
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
}