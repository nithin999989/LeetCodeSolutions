class Solution:
    def reverseBits(self, n: int) -> int:
        data = bin(n) # convert int to binary string
        data = data[2:] # 0b000........ we are only selecting our string after 2nd index
        data = data.zfill(32) # zfill is used to add zeros at the begining of the string until it reaches the length as specidifed
        data = data[::-1] # slicing technique to reverse the string
        return int(data, 2)