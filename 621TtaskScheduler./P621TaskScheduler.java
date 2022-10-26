package com.longluo.top100;

import java.util.*;


public class Problem621_taskScheduler {

    // Simulate + Greedy time: O(tasks * C) space: O(C)
    public static int leastInterval_greedy(char[] tasks, int n) {
        int len = tasks.length;
        if (n == 0) {
            return len;
        }

        int[] cnt = new int[26];
        for (char task : tasks) {
            cnt[task - 'A']++;
        }

        Arrays.sort(cnt);

        int min = 0;
        int size = tasks.length;
        while (size > 0) {
            int roundTime = 0;
            for (int i = 25; i >= 0; i--) {
                if (cnt[i] > 0) {
                    roundTime++;
                    cnt[i]--;
                    size--;
                }

                if (roundTime > n) {
                    break;
                }
            }

            Arrays.sort(cnt);
            min += size == 0 ? roundTime : Math.max(roundTime, n + 1);
        }

        return min;
    }

    // PQ time: O(nC) space: O(n)
    public static int leastInterval_pq(char[] tasks, int n) {
        int[] counts = new int[26];
        for (char task : tasks) {
            counts[task - 'A']++;
        }

        PriorityQueue<Integer> pq = new PriorityQueue<>((o1, o2) -> o2 - o1);
        for (int x : counts) {
            if (x > 0) {
                pq.offer(x);
            }
        }

        int min = 0;
        int cycle = n + 1;
        while (!pq.isEmpty()) {
            int count = 0;
            Queue<Integer> queue = new LinkedList<>();
            for (int i = 0; i < cycle; i++) {
                if (!pq.isEmpty()) {
                    queue.offer(pq.poll());
                    count++;
                }
            }

            while (!queue.isEmpty()) {
                int freq = queue.poll();
                freq--;
                if (freq > 0) {
                    pq.offer(freq);
                }
            }

            min += pq.isEmpty() ? count : cycle;
        }

        return min;
    }

    // Math time: O(nlogn+n)=O(nlogn) space: O(n + logn)=O(n)
    public static int leastInterval_math(char[] tasks, int n) {
        int[] count = new int[26];
        for (char task : tasks) {
            count[task - 'A']++;
        }

        Arrays.sort(count);
        int maxTimes = count[25];
        int maxCount = 0;
        for (int x : count) {
            if (x == maxTimes) {
                maxCount++;
            }
        }

        int ans = (maxTimes - 1) * (n + 1) + maxCount;
        return Math.max(ans, tasks.length);
    }

    // Math Set O(n + 26) space: O(26)
    public static int leastInterval_math_set(char[] tasks, int n) {
        Map<Character, Integer> freqMap = new HashMap<>();
        int maxTimes = 0;
        for (char task : tasks) {
            int times = freqMap.getOrDefault(task, 0) + 1;
            freqMap.put(task, times);
            maxTimes = Math.max(maxTimes, times);
        }

        int maxCount = 0;
        for (Map.Entry<Character, Integer> entry : freqMap.entrySet()) {
            int value = entry.getValue();
            if (value == maxTimes) {
                maxCount++;
            }
        }

        int ans = (maxTimes - 1) * (n + 1) + maxCount;
        return Math.max(ans, tasks.length);
    }

    public static void main(String[] args) {
        System.out.println("8 ?= " + leastInterval_greedy(new char[]{'A', 'A', 'A', 'B', 'B', 'B'}, 2));
        System.out.println("16 ?= " + leastInterval_greedy(new char[]{'A', 'A', 'A', 'A', 'A', 'A', 'B', 'C', 'D', 'E', 'F', 'G'}, 2));

        System.out.println("8 ?= " + leastInterval_pq(new char[]{'A', 'A', 'A', 'B', 'B', 'B'}, 2));
        System.out.println("16 ?= " + leastInterval_pq(new char[]{'A', 'A', 'A', 'A', 'A', 'A', 'B', 'C', 'D', 'E', 'F', 'G'}, 2));

        System.out.println("8 ?= " + leastInterval_math(new char[]{'A', 'A', 'A', 'B', 'B', 'B'}, 2));
        System.out.println("6 ?= " + leastInterval_math(new char[]{'A', 'A', 'A', 'B', 'B', 'B'}, 0));

        System.out.println("6 ?= " + leastInterval_math_set(new char[]{'A', 'A', 'A', 'B', 'B', 'B'}, 0));
    }
}
