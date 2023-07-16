class Solution {
    private final String[] ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    private final String[] tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    private final String[] teens = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    public String numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }

        StringBuilder result = new StringBuilder();

        // Handles groups of three digits (thousands, millions, billions)
        int billion = num / 1_000_000_000;
        num %= 1_000_000_000;
        thousandsGroup(result, billion, "Billion");

        int million = num / 1_000_000;
        num %= 1_000_000;
        thousandsGroup(result, million, "Million");

        int thousand = num / 1_000;
        num %= 1_000;
        thousandsGroup(result, thousand, "Thousand");

        thousandsGroup(result, num, "");

        return result.toString().trim();
    }

    private void thousandsGroup(StringBuilder result, int num, String placeValue) {
        if (num == 0) {
            return;
        }

        if (num >= 100) {
            int hundred = num / 100;
            num %= 100;
            result.append(ones[hundred]).append(" Hundred ");
        }

        if (num >= 11 && num <= 19) {
            result.append(teens[num - 10]).append(" ");
        } else if (num >= 10) {
            int ten = num / 10;
            num %= 10;
            result.append(tens[ten]).append(" ");
        }

        if (num >= 1 && num <= 9) {
            result.append(ones[num]).append(" ");
        }

        result.append(placeValue).append(" ");
    }
}
