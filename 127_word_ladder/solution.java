class Solution {
    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
       HashSet<String> set=new HashSet<>();
       for(String i:wordList){
           set.add(i);
       }
       if(!set.contains(endWord)){
           return 0;
       }
       Queue<String> que=new LinkedList<>();
       que.offer(beginWord);
       int level=1;
       while(!que.isEmpty()){
           int size=que.size();
           while(size-->0){
           String currWord=que.poll();
           char charWord[]=currWord.toCharArray();
           for(int i=0;i<charWord.length;i++){
               char original=charWord[i];
               for(char ch='a';ch<='z';ch++){
                   charWord[i]=ch;
                   String newWord=String.valueOf(charWord);
                   if(newWord.equals(endWord)){
                       return level+1;
                   }
                   if(set.contains(newWord)){
                       que.offer(newWord);
                       set.remove(newWord);
                   }
               }
               charWord[i]=original;
           }
           }
           level++;
       }
       return 0;
    }
}