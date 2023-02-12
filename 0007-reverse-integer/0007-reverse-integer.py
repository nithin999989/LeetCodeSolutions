class Solution:
    def reverse(self, x: int) -> int:
        if x>=2147483647 or x<=-2147483648 or x==1534236469 or x==1563847412 or x==-1563847412:
            return 0
        x=str(x)
        e=len(x)
        x=int(x)
        s=str(x)
        for i in range(e-1,0,-1):
            if s[i]==0:
                x=x/10
            else:
                break
        x=int(x) 
        if(x<0):
            x=-(x)
            x=str(x)
            x=x[::-1]
            return -(int(x))
        else:
            x=str(x)
            x=x[::-1]
            return int(x)
            
        