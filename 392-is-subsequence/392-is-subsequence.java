class Solution {
        public int binSearchHelper(List<Integer> idxList, int lastFound){
        int start=0;
        int end = idxList.size()-1;
        int result = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(idxList.get(mid)>lastFound){
                result = idxList.get(mid);
                end = mid-1;
            } else {
                start = mid+1;
            }
            
        }
            return result;
      
}
   public boolean isSubsequence(String s, String t) {
        if(s==null || t==null){
            return false;
        }
        Map<Character, List<Integer>> map = new HashMap();
        
        for(int i=0; i<t.length();i++){
            List<Integer> idx = map.getOrDefault(t.charAt(i),new ArrayList());
            idx.add(i);
            map.put(t.charAt(i), idx);
        }
        
        int lastFound = -1;
        for(int i=0; i<s.length(); i++) {
            if(!map.containsKey(s.charAt(i))){
                return false;
            }
            
            List<Integer> idxList = map.get(s.charAt(i));
            int idx = binSearchHelper(idxList, lastFound);
            if(idx ==-1){
                return false;
            }
            lastFound = idx;
        }
        
        return true;
    }

    
}