class Solution {
    public int numTilePossibilities(String tiles) {
        Set<String> set = new HashSet<>();
        boolean []  visit = new boolean[tiles.length()];
        possibilities(tiles,set,visit,"");
        return set.size();
    }
    public void possibilities(String tiles,Set<String> set,boolean [] visit,String ans){
        if(ans.length()>0){
            if(set.contains(ans))
                return;
        
      
            set.add(ans);
        }
        for(int i=0;i<tiles.length();i++){
            if(visit[i])continue;
            visit[i]=true;
            possibilities(tiles,set,visit,ans + tiles.charAt(i));
            visit[i]=false;
        }
    }
}