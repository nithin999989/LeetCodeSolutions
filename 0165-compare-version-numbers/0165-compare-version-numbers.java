class Solution {
    public int compareVersion(String version1, String version2) {
        String[] v1 = version1.split("\\.");
        String[] v2 = version2.split("\\.");
        int i = 0;
        for (; i < v1.length && i < v2.length; i ++) {
            int v1 = Integer.parseInt(v1[i]);
            int v2 = Integer.parseInt(v2[i]);
            if (v1 > v2) {
                return 1;
            }
            if (v2 > v1) {
                return -1;
            }
        }
        if (i < v1.length) {
            for (;i < v1.length;i++) {
                if (Integer.parseInt(v1[i]) != 0) {
                    return 1;
                }
            }
        }
        if (i < v2.length) {
            for (;i < v2.length;i++) {
                if (Integer.parseInt(v2[i]) != 0) {
                    return -1;
                }
            }
        }
        return 0;
    }
}
