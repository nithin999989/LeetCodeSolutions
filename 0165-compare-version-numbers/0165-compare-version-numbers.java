public class Solution {
    public int compareVersion(String version1, String version2) {
        String[] ver1 = version1.split("\\.");
        String[] ver2 = version2.split("\\.");
        int i = 0;
        for (; i < ver1.length && i < ver2.length; i ++) {
            int v1 = Integer.parseInt(ver1[i]);
            int v2 = Integer.parseInt(ver2[i]);
            if (v1 > v2) {
                return 1;
            }
            if (v2 > v1) {
                return -1;
            }
        }
        if (i < ver1.length) {
            for (;i < ver1.length;i++) {
                if (Integer.parseInt(ver1[i]) != 0) {
                    return 1;
                }
            }
        }
        if (i < ver2.length) {
            for (;i < ver2.length;i++) {
                if (Integer.parseInt(ver2[i]) != 0) {
                    return -1;
                }
            }
        }
        return 0;
    }
}
