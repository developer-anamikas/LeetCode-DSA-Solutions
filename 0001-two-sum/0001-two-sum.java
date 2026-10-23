class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(target == nums[i] + nums[j]){
                    return new int[] { i, j }; // Clean and no extra variables needed!
                }
            }
        }
        return new int[] {}; // Required fallback return for the compiler
    }
}