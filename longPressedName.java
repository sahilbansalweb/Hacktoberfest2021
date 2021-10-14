//Ques : https://leetcode.com/problems/long-pressed-name/

class Solution {
    public boolean isLongPressedName(String name, String typed) {
        int j=0;
        for(int i=0;i<typed.length();i++){
            if(i==0){
                if(name.charAt(j)==typed.charAt(i)){
                    j++;
                }else{
                    return false;
                }
            }else{
                if(j<name.length() && name.charAt(j)==typed.charAt(i)){
                    j++;
                }else if(typed.charAt(i-1)==typed.charAt(i)){
                    //
                }else{
                    //System.out.println(typed.charAt(i)+" "+name.charAt(j));
                    return false;
                }
            }
        }
        if(j<name.length()){
            return false;
        }
        return true;
        
    }
}