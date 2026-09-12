class Solution {
public:
    int addDigits(int num) {
        int count=0;
        if(num<10){
            return {num};
        }
        while(num>=10){
            int sum=0;
            while(num>0){
                int a=num%10;
                sum+=a;
                num=num/10;
            }
            num=sum;
        }
        return {num};
        
    }
};