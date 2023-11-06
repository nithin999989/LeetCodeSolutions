class Solution {
    public int maxPerformance(int n, int[] speed, int[] efficiency, int k) {
        int team[][]=new int[n][2];
        for(int i=0;i<n;i++){
            team[i][0]=speed[i];
            team[i][1]=efficiency[i];
        }
        Arrays.sort(team,(a,b)->Integer.compare(a[1],b[1]));
        PriorityQueue <Integer> minHeap=new PriorityQueue<>((a,b)->(a-b));
        long totalSpeed=0;
        long maxPerformance=0;
        for(int i=n-1;i>=0;i--){
            totalSpeed+=team[i][0];
            minHeap.offer(team[i][0]);
            maxPerformance=Math.max(maxPerformance,totalSpeed*team[i][1]);
            if(minHeap.size()==k){
                totalSpeed-=minHeap.poll();
            }
        }
        return (int)(maxPerformance%1000000007);
    }
}