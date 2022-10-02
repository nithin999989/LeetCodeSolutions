class Solution {
    public  List<String> letterCombinations(String digits) {
        if(digits.length() == 0) return new ArrayList<String>();
        return getCombinations("",digits);
    }

    public  List<String> getCombinations(String s, String digits) {
        if(digits.length() == 0){
            List<String> list = new ArrayList<>();
            list.add(s);
            return list;
        }
        int num = digits.charAt(0) - '0' - 1;

        List<String> l = new ArrayList<>();

        int end = num*3;
        int start = (num-1) * 3;

        if(num == 6){ end++; }
        else if(num == 7){
            start++;
            end++;
        } else if (num == 8) {
            start++;
            end+=2;
        }
        for(int i=start;i < end;i++){
            char ch = (char) ('a' + i);
            l.addAll(getCombinations(s + ch, digits.substring(1)));
        }

        return l;
    }
}