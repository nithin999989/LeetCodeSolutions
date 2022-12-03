class Solution {
    public String frequencySort(String s) {
        HashMap<Character,Integer> map=new HashMap<>();
        int n=s.length();
        for(int i=0;i<n;i++){
            char c=s.charAt(i);
            map.put(c,map.getOrDefault(c,0)+1);
        }
        PriorityQueue<Character> maxHeap=new PriorityQueue<>((a,b)->map.get(b)-map.get(a));
        maxHeap.addAll(map.keySet());
        StringBuilder result=new StringBuilder();
        while(!maxHeap.isEmpty()){
            char ch=maxHeap.remove();
            int count=map.get(ch);
            while(count!=0){
                result.append(ch);
                count--;
            }
        }
        return result.toString();
    }
}