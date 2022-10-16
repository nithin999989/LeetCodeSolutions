import java.util.*;

public class Minimum_Path_Sum{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the number of Rows of the Grid: ");
        int m=sc.nextInt();
        
        System.out.println("Enter the number of Columns of the Grid: ");
        int n=sc.nextInt();
        
        int[][] grid=new int[m][n];
        
        System.out.println("Enter the Elements  the Grid: ");
        for(int i=0;i<grid.length;i++)
        {
            for(int j=0;j<grid[0].length;j++)
            {
                grid[i][j]=sc.nextInt();
            }
        }

        //dp Table 
        int[][] dp = new int[m][n];

        

        for(int i=0;i<=m-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=grid[i][j];
                }
                else if(i==0)
                {
                    dp[i][j]= dp[i][j-1]+grid[i][j];
                }
                else if(j==0)
                {
                    dp[i][j]=dp[i-1][j]+grid[i][j];
                }
                else
                {
                    dp[i][j]=Math.min(dp[i-1][j],dp[i][j-1])+grid[i][j];
                }
            }
        }
        System.out.println(dp[m-1][n-1]);

        sc.close();
    }
}

