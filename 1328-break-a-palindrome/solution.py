class Solution:
    def breakPalindrome(self, s: str) -> str:
        n = len(s)
        if n == 1:
            return ""
        s = list(s)
        idx = 0
        while idx < n - 1 - idx:
            if s[idx] != "a":
                s[idx] = "a"
                return "".join(s)
            idx += 1
        s.pop()
        return "".join(s) + "b"
