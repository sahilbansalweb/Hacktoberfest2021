//Ques : https://leetcode.com/problems/maximum-product-of-three-numbers/

class Solution {
    public int maximumProduct(int[] nums) {
        int max1=nums[0],max2=Integer.MIN_VALUE,max3=Integer.MIN_VALUE,min1=nums[0],min2=Integer.MAX_VALUE;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>max1){
                max3=max2;
                max2=max1;
                max1=nums[i];
            }else if(nums[i]>max2){
                max3=max2;
                max2=nums[i];
            }else if(nums[i]>max3){
                max3=nums[i];
            }
            
            if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }else if(nums[i]<min2){
                min2=nums[i];
            }
        }
        return Math.max(max1*max2*max3,min1*min2*max1);
    }
}