class Solution {
public:
    bool isPalindrome(int x) {
        int orginalnum=x;
        int i=0;
        long reverse=0;
        
        while(x>0){
            reverse=reverse*10+x%10;
            
            x/=10;
    
        }
        if(reverse==orginalnum){
            return true;
        }else return false;
   
        
    }
};
