#403. Frog Jump

  def canCross(stones):
  
    stone_set = set(stones)
    
    memo = {}
    
    def canCrossHelper(pos, k):
     
        if (pos, k) in memo:
            return memo[(pos, k)]
        
        if pos == stones[-1]:
            return True    
       
        for jump in range(k - 1, k + 2):
            if jump > 0 and pos + jump in stone_set:
                if canCrossHelper(pos + jump, jump):
                    memo[(pos, k)] = True
                    return True
        
        memo[(pos, k)] = False
        return False
    
    return canCrossHelper(0, 1)
