class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int b=x;
        if(x<0){
            return {0};
        }
        else{
            while(x>0){
                int a=x%10;
                rev=rev*10+a;
                x=x/10;
            }
        }
        if(rev==b){
                return {1};
            }
            else{
                return {0};
            }
    }
};