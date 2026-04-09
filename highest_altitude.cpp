class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=0; i<gain.size()-1; i++){
            gain[i+1] = gain[i] + gain[i+1];
        }
        int max =0;
        for(int i=0; i<gain.size(); i++){
            if(gain[i] >= max){
                max = gain[i];
            }
        }
        return max;
    }
};
