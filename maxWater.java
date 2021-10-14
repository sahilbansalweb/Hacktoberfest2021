//QUES : https://leetcode.com/problems/container-with-most-water/

class Solution {
    public int maxArea(int[] arr) {
        int i=0,j=arr.length-1,area=Integer.MIN_VALUE;
        while(i<j){
            area = Math.max(area,Math.min(arr[i],arr[j])*(j-i));
            if(arr[i]<=arr[j]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }
}