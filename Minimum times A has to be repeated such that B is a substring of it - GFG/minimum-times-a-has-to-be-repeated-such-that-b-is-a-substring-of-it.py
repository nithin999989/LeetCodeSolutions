#User function Template for python3

        
class Solution:
    def minRepeats(self, A, B):
        for i in range(1, len(B)//len(A)+3): 
            if B in A * i: return i
        return -1

            

       
           

            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        A=input()
        B=input()
        
        ob = Solution()
        print(ob.minRepeats(A,B))
# } Driver Code Ends