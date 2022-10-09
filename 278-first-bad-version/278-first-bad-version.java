/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int s = 1;
        int e = n;
        while(s <= e){
            int m = s + ( e - s ) / 2;
            if(!isBadVersion(m)){
                if(isBadVersion(m+1)){
                    return m+1;
                }
                else{
                    s = m + 1;
                }
            }
            else{
                e = m - 1;
            }
        }
        return 1;
    }
}
