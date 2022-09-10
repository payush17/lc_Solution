class Solution {
    public int totalFruit(int[] fruits) {
        if(fruits==null || fruits.length==0)return 0;
        int len = fruits.length;
        HashMap<Integer,Integer> fruit = new HashMap<>();
        int maxFruit = 1;
        int start=0;
        int container =0;
        for(int i=0;i<len;i++ ){
            //put ith fruit
            fruit.put(fruits[i],fruit.getOrDefault(fruits[i],0)+1);
            container++;
            // if we cross limit i.e. 2 remove fruit till we get 2
            while(fruit.size()>2){
                container--;
                int curr = fruit.getOrDefault(fruits[start],0)-1;
                if(curr<=0)
                    fruit.remove(fruits[start]);
                if(curr>0)
                    fruit.put(fruits[start],curr);
                
                 start++;
            }
            maxFruit = Math.max(maxFruit,container);
        }
        
        return maxFruit;
    }
}