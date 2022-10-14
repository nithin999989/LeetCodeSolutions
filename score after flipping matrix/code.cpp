class Solution {
public:
    
    int convert(vector<int> &temp){
        
        
        int ans=0,count=0;
        // reverse(temp.begin(),temp.end());
        for(int i=temp.size()-1;i>=0;i--)
            ans+=(pow(2,count)*temp[i]),count++;
        return ans;
        
        
    }
    
    
    int matrixScore(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            int count0=0,count1=0,check=false;
            for(int j=0;j<n;j++){
                
                if(grid[i][j]==1){
                    count1++;
                    if(count0!=0)
                        check=true;
                    break;
                }
                count0++;
                
            }
            
            if(check || count1==0)
                for(int j=0;j<n;j++)
               grid[i][j]=1-grid[i][j];
            
        }
         for(int i=0;i<n;i++){
            int count0=0,count1=0,check=false;
            for(int j=0;j<m;j++){
                
               if(grid[j][i]==1)
                   count1++;
                else
                    count0++;
                
            }
            
            if(count0>count1)
                for(int j=0;j<m;j++)
                   grid[j][i]=1-grid[j][i];
         }
        
        
        int ans=0;
        for(int i=0;i<m;i++)
            ans+=convert(grid[i]);
        
        
        
        return ans;
    }
};
