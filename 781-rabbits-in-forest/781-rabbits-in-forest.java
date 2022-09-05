class Solution {
    public int numRabbits(int[] answers) {
        Map<Integer,Integer> map = new HashMap<>();
        int rabbit_count=0;
        for(int x:answers){
            if(x==0){
                //if no same colour include curr rabbit
                rabbit_count++;
                continue;
            }
            if(!map.containsKey(x)){
                map.put(x,0);
                rabbit_count += x+1;
                //add all rabbit wiht same color other awa answer one
            }
            else{
                map.put(x,map.get(x)+1);
                //if we reach and count all rabbit remove that one
                if(map.get(x)==x)
                    map.remove(x);
            }
                
        }
        return rabbit_count;
    }
}