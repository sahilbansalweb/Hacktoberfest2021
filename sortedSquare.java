//Ques : https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
    public int[] sortedSquares(int[] nums) {
        int i=0,j=nums.length-1;
        int[] ans = new int[nums.length];
        int idx=nums.length-1;
        while(i<=j){
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];
            if(a>=b){
                ans[idx]=a;i++;
            }else{
                ans[idx]=b;j--;
            }
            idx--;
        }
        return ans;
    }
}