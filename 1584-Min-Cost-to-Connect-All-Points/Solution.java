class Solution {
    public int minCostConnectPoints(int[][] points) {
        int res = 0;
        boolean[] added = new boolean[points.length];
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> a[0] - b[0]);
        pq.offer(new int[]{0, 0});
        while (!pq.isEmpty()) {
            int[] cur = pq.remove();
            if (added[cur[1]]) continue;
            added[cur[1]] = true;
            res += cur[0];
            for (int j = 0; j < points.length; j++) {
                if (j == cur[1] || added[j]) continue;
                int dist = Math.abs(points[cur[1]][0] - points[j][0]) + Math.abs(points[cur[1]][1] - points[j][1]);
                pq.offer(new int[]{dist, j});
            }
        }
        return res;
    }
}