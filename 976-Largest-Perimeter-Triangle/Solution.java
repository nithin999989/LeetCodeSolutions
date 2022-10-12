    public int Solution(int[] A) {
        Arrays.sort(A);
        for (int i = A.length - 1; i > 1; --i)
            if (A[i] < A[i - 1] + A[i - 2])
                return A[i] + A[i - 1] + A[i - 2];
        return 0;
    }
