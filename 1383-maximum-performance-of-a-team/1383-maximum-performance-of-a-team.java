class Solution {
    public int maxPerformance(int n, int[] speed, int[] efficiency, int k) {
        int[][] res=new int[n][2];
        long mod=(long)1e9+7;
        for(int i=0;i<n;i++){
            res[i][0]=speed[i];
            res[i][1]=efficiency[i];
        }
        Arrays.sort(res,(a,b)->(b[1]-a[1]));
        PriorityQueue<Integer> pq=new PriorityQueue<>();
        long ans=0,sum=0;
        for(int i=0;i<n;i++){
            int e=res[i][1];
            pq.add(res[i][0]);
            sum=sum+res[i][0];
            if(pq.size()>k) {
                sum=sum-pq.poll();
            }
            ans=Math.max(ans,sum*e);
        }
        
        return (int)(ans%mod);
    }
}