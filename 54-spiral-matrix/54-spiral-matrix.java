class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> spiral = new ArrayList<>();
        int rowStart=0;
        int rowEnd= matrix.length-1;
        int colStart=0;
        int colEnd = matrix[0].length-1;
        while(rowStart<= rowEnd && colStart<= colEnd){
            //left to right
            for(int i=colStart;i<=colEnd;i++){
                spiral.add(matrix[rowStart][i]);
            }
            rowStart++ ;
            //top to bottom
            for(int i=rowStart;i<=rowEnd;i++){
                spiral.add(matrix[i][colEnd]);
            }
            colEnd-- ;
            //check condition again for row
            if(rowStart<=rowEnd){
                //right to left
                for(int i = colEnd;i>=colStart;i--){
                    spiral.add(matrix[rowEnd][i]);
                }
                rowEnd--;
            }
         //check condition again for coloumn
            if(colStart<=colEnd){
                //bottom to top
                for(int i=rowEnd;i>=rowStart;i--){
                    spiral.add(matrix[i][colStart]);
                }
                colStart++;
            }
        }
        return spiral;
        
    }
}