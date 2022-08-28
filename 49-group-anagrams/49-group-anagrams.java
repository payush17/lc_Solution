class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String ,List> map = new HashMap<>();
        if(strs.length==0)return new ArrayList<>();
        
        
        
        for(String str : strs){
            char [] arr = str.toCharArray();
            Arrays.sort(arr);
            String copy_arr = new String(arr);
            
            
            if(!map.containsKey(copy_arr))
                map.put(copy_arr, new ArrayList<>());
            
            map.get(copy_arr).add(str);
        }
        return new ArrayList(map.values());
        
    }
}
  