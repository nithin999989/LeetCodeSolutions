class Solution {
    public List<Double> averageOfLevels(TreeNode node) {
        List<Double> arr = new ArrayList<>();
        Queue<TreeNode> q1 = new LinkedList<>();
        q1.add(node);
        
        if(node == null)
            return arr;
     
        while(!q1.isEmpty())
        {
            int size = q1.size();
            Double sum = 0.00000;
            int cnt=size;
            while(size > 0)
            {
                TreeNode top = q1.poll();
                sum += top.val;
                if(top.left != null)
                {
                    q1.add(top.left);
                }
                if(top.right != null)
                {
                    q1.add(top.right);
                }
                size--;
            }
            arr.add((double)(sum/cnt));
        }
        return arr;
    }
}