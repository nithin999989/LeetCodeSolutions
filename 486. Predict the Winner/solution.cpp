class Solution {
public:

    bool help(int l,int h,int fpscore,int spscore,int player,vector<int> &nums){
        
        if(l>h){
           if( fpscore>=spscore){
               // cout<<fpscore<<" "<<spscore<<endl;
           return true;
           }
            return false;
        }
        if(player==0){
            
            return help(l+1,h,fpscore+nums[l],spscore,1-player,nums) ||
                help(l,h-1,fpscore+nums[h],spscore,1-player,nums);
            // return s;
        }
        else{
            
           return help(l+1,h,fpscore,spscore+nums[l],1-player,nums) && 
               help(l,h-1,fpscore,spscore+nums[h],1-player,nums);
           
        }
        
        return false;
        
        
        
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        
        return help(0,nums.size()-1,0,0,0,nums);
        
        
        
    }
};
