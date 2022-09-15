class Solution {
    public int[] findOriginalArray(int[] changed) {
        int len =changed.length;
        if(len %2 != 0)return new int [0];//odd size array cant contain all ele double
        int [] org = new int [len/2];
        Arrays.sort(changed);int j=0;
        Map<Integer,Integer> map = new HashMap<>();
        for(int i=len-1;i>=0;i--){
          int curr = changed[i];
            int temp = 2*curr;
            if(map.containsKey(temp)){
                if(map.get(temp)==1)
                {
                    map.remove(temp);//single occurence
              
                }
                else
                    map.put(temp,map.get(temp)-1);//remove more than one occurence to avoid dupli
                  org[j++]=curr ;//put curr element in answer array
            }
            else
                map.put(curr,map.getOrDefault(curr,0)+1);//put element in map
        }
        return j == len/2 ?org : new int[0];
    }
}