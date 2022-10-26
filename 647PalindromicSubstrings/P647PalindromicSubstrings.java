package com.longluo.top100;

/**
 * https://leetcode-cn.com/problems/palindromic-substrings/
 */
public class Problem647_palindromicSubstrings {

    // BF time: O(n^3) space: O(1)
    public static int countSubstrings_bf(String s) {
        int len = s.length();
        int ans = 0;
        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                if (validPalindromic(s, i, j)) {
                    ans++;
                }
            }
        }

        return ans;
    }

    public static boolean validPalindromic(String str, int left, int right) {
        if (left > right) {
            return false;
        }

        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    // DP time: O(n^2) space: O(n^2)
    public static int countSubstrings_dp(String s) {
        int len = s.length();
        int ans = 0;
        boolean[][] dp = new boolean[len][len];

        for (int j = 0; j < len; j++) {
            for (int i = 0; i <= j; i++) {
                if (i == j) {
                    dp[i][j] = true;
                } else if (i + 1 == j) {
                    dp[i][j] = s.charAt(i) == s.charAt(j);
                } else if (i < len - 1 && j >= 1) {
                    dp[i][j] = dp[i + 1][j - 1] && s.charAt(j) == s.charAt(i);
                }

                ans += dp[i][j] ? 1 : 0;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        System.out.println("3 ?= " + countSubstrings_bf("abc"));
        System.out.println("3 ?= " + countSubstrings_dp("abc"));
    }
}
