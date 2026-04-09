class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int temp;
        for(int i=0; i<image.size(); i++){
            int k= image[i].size()-1;
            for(int j=0; j<image[i].size(); j++){
                temp = image[i][j];
                image[i][j] = image[i][k];
                image[i][k] = temp;
                k--;
                if(k<image[i].size()/2){
                    break;
                }
            }
            for(int j=0; j<image[i].size(); j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};
