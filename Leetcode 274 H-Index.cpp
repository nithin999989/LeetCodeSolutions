class Solution 
{
    public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int h_index = 0;
        int m = citations.size();
        for(int i=0;i<m;++i){
            h_index = max(h_index,min(citations[i],m-i));
        }
        return h_index;   
    }
};
