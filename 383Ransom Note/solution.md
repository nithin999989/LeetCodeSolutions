## Soution -1
> Used hashmap to store the values from the first string to the second
> then check if the value of the second string are present in the first one or not 
  * If not then simply return false 
  * Otherwise in case there is a match reduce the value of the key by one 
>If the key's value gets reduced to zero then it means than we have found the value we needed in the string , thus finally return true 

```cpp
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m ;
        
        for(int i = 0 ; i< magazine.length() ;i++){
            m[magazine[i]]++ ;
            
        }
        for(int i = 0 ; i< ransomNote.length() ;i++){
           if(m[ransomNote[i]] == 0) return false ;
            m[ransomNote[i]]-- ;
            
        }
       
        
       
        return true ;
            
    }
};
```