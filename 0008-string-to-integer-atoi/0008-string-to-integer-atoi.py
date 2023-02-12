class Solution:
    def myAtoi(self, str: str) -> int:
        str = str.strip()
        if not str:
            return 0
        sign = -1 if str[0] == '-' else 1
        str = str[1:] if str[0] in ['-', '+'] else str
        res = 0
        for char in str:
            if not char.isdigit():
                break
            res = res * 10 + int(char)
            if res * sign >= 2**31 - 1:
                return 2**31 - 1
            if res * sign <= -2**31:
                return -2**31
        return res * sign