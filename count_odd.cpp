class Solution {
public:
    int countOdds(int low, int high) {
        int count =0;
        for(int i=high; i>=low; i--){
            if(high % 2 == 1){
                count++;
            }
            high--;
        }
        return count;
    }
};
