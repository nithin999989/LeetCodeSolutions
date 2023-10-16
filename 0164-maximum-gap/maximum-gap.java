class Solution {
    public int maximumGap(int[] nums) {
        if (nums.length < 2) return 0;
        int n1 = 0, n2 = Integer.MAX_VALUE, res = 0;
        for (int n : nums) {
            n1 = Math.max(n1, n);
            n2 = Math.min(n2, n);
        }
        int bsize = Math.max((n1 - n2) / (nums.length - 1), 1);
        List<List<Integer>> load = new ArrayList<>();
        for (int i = (n1 - n2) / bsize; i >= 0; i--)
            load.add(new ArrayList<>());
        for (int n : nums)
            load.get((n - n2) / bsize).add(n);
        int current1 = 0;
        for (List<Integer> x : load) {
            if (x.isEmpty()) continue;
            int before1 = current1 > 0 ? current1 : x.get(0), current2 = x.get(0);
            for (int n : x) {
                current1 = Math.max(current1, n);
                current2 = Math.min(current2, n);
            }
            res = Math.max(res, current2 - before1);
        }
        return res;
    }
}
