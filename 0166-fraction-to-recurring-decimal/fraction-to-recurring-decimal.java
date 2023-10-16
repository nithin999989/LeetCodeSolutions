class Solution {
    public String fractionToDecimal(int numerator, int denominator) {
        long n = numerator, d = denominator;
        if (n % d == 0) {
            return n / d + "";
        }
        boolean neg = false;
        if ((n < 0 && d > 0) || (n > 0 && d < 0)) {
            neg = true;
        }
        if (n < 0) {
            n = -n;
        }
        if (d < 0) {
            d = -d;
        }
        HashMap<Long, Integer> index = new HashMap<Long, Integer>();
        String result = "";
        result += n / d + ".";
        n = n % d;
        while (n != 0) {
            if (index.containsKey(n)) {
                //recurring
                result = result.substring(0, index.get(n)) + "(" + result.substring(index.get(n)) + ")";
                break;
            }
            index.put(n, result.length());
            result += n*10/d;
            n = n*10 % d;
        }
        if (neg == true) {
            result = '-' + result;
        }
        return result;
    }
}
