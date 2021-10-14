//Ques : https://leetcode.com/problems/majority-element/

class Solution {
    public int majorityElement(int[] nums) {
        int val = nums[0],count=1;
        for(int i=1;i<nums.length;i++){
            if(nums[i]==val){
                count++;
            }else if(count==0){
                val=nums[i];
                count++;
            }else{
                count--;
            }
        }
        return val;
    }
}