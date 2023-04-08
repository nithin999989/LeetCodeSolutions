//{ Driver Code Starts
import java.io.*;
import java.util.*;

class IntArray {
    public static int[] input(BufferedReader br, int n) throws IOException {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = Integer.parseInt(s[i]);

        return a;
    }

    public static void print(int[] a) {
        for (int e : a) System.out.print(e + " ");
        System.out.println();
    }

    public static void print(ArrayList<Integer> a) {

        for (int e : a) System.out.print(e + " ");
        System.out.println();
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t;
        t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            int n;
            n = Integer.parseInt(br.readLine());

            int[] arr = IntArray.input(br, n);

            Solution obj = new Solution();
            ArrayList<Integer> res = obj.makeBeautiful(arr);
            for (int e : res) out.print(e + " ");
            out.println();
        }
        out.close();
    }
}

// } Driver Code Ends

class Solution {
    public static ArrayList<Integer> makeBeautiful(int[] arr) {
        ArrayList<Integer> beautifulArray = new ArrayList<>();
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < arr.length; i++) {
            if (!stack.isEmpty() && ((stack.peek() < 0 && arr[i] >= 0) || (stack.peek() >= 0 && arr[i] < 0))) {
                // If current element has a different sign than the top of stack, pop the stack
                stack.pop();
            } else {
                stack.push(arr[i]);
            }
        }

        while (!stack.isEmpty()) {
            int x = stack.pop();
            beautifulArray.add(0, x); // Add element to the front of the ArrayList to maintain order
        }

        return beautifulArray;
    }
}