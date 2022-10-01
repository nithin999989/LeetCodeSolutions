class Solution {
public:
    void fill(vector<vector<int>>& image, int x, int y, int r, int c, int nc, int color)
    {
		// Check boundary conditions
        if(x < 0 || y < 0 || x >= r || y >= c || image[x][y] != color)
            return;
        
		// Change the color
        image[x][y] = nc;
        
		// Recursive calls for all the 4 directions-dfs
        fill(image,x-1,y,r,c,nc,color);    // Top
        fill(image,x+1,y,r,c,nc,color);    // Bottom
        fill(image,x,y-1,r,c,nc,color);    // Left
        fill(image,x,y+1,r,c,nc,color);    // Right
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
		// Total rows and columns
        int r = image.size();
        int c = image[0].size();
        
		// Source color
        int color = image[sr][sc];
        
		// Check if source color is equal to new color
		// If same then return 
        if(color == newColor)
            return image;
        
		// Call for dfs
        fill(image,sr,sc,r,c,newColor,color);
        
		// Return the answer
        return image;
    }
};