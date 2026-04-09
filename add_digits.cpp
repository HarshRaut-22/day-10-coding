class Solution {
public:
    int addDigits(int num) {
        int rem ,sum = 0;
        while(num>9){
            while(num>0){
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            num = sum;
            sum = 0;    
        }
        return num;
    }
};
