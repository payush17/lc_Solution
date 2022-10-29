class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       // int start = 0;
       // int last = image[0].size()-1;
      for(int  i=0;i<image.size();i++){
            int start=0;int last = image[i].size()-1;
            while(start<last){
                swap(image[i][start],image[i][last]);
                start++;
                last--;
            }
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                image[i][j] = !image[i][j];
            }
        }
        
        return image;
    }
};