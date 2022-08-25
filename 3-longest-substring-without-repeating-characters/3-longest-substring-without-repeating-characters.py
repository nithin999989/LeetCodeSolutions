class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ll=[]
        s2=""
        v=""
        flag=0
        maxi=0
        if s=="":
            return 0
        elif len(s)>=2 and s[0]==s[1]:
            s=s[1:]
            print(s)
        for i in range(len(s)):
            v=""
            for j in range(i,len(s)):
                if s[j] in v:
                    ll.append(len(v))
                    flag=flag+1
                    break
                else:
                    v=s[i:j+1]
                    if len(v)>maxi:
                        maxi=len(v)
            ll.append(maxi)
            if flag==0:
                ll.append(len(v))
        return max(ll)