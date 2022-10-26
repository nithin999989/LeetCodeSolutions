package com.longluo.top100;

import java.util.Arrays;
import java.util.Stack;

/**
 * https://leetcode-cn.com/problems/daily-temperatures/
 */
public class Problem739_dailyTemperatures {

    // BF time: O(n^2) space: O(n)
    public static int[] dailyTemperatures_bf(int[] temperatures) {
        int len = temperatures.length;
        int[] answer = new int[len];
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (temperatures[j] > temperatures[i]) {
                    answer[i] = j - i;
                    break;
                }
            }
        }

        return answer;
    }

//time: O(n) space: O(n)
    public static int[] dailyTemperatures_stack(int[] temperatures) {
        int len = temperatures.length;
        int[] answer = new int[len];
        Stack<Integer> stk = new Stack<>();
        for (int i = 0; i < len; i++) {
            while (!stk.empty() && temperatures[i] > temperatures[stk.peek()]) {
                int idx = stk.pop();
                answer[idx] = i - idx;
            }

            stk.push(i);
        }

        return answer;
    }

    public static void main(String[] args) {
        Arrays.toString(dailyTemperatures_bf(new int[]{73, 74, 75, 71, 69, 72, 76, 73}));
        Arrays.toString(dailyTemperatures_stack(new int[]{73, 74, 75, 71, 69, 72, 76, 73}));
    }
}
