#include<bits/stdc++.h> // this includes the complete standard library of c++
using namespace std; 


vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector <string> ans; // this vector will store the strings for the answer
        ans.push_back(words[0]); // initially pushed the first element of the vector words as we started loop from index 1
        for(int i=1;i<n;i++){ // this loop compares the current and the previous values of the groups 
            if(groups[i]!=groups[i-1]){  // if the values are different then the word at that index in the vector words is pushed in the answer vector.
                ans.push_back(words[i]);
            }
        }
        return(ans); // final answer is returned
    }
int main(){
    // taking input
    int n;
    cin >> n;
    //declaring vectors
    vector<string> words(n);
    vector<int> groups(n);

    // taking values of words and groups
    for(int i = 0 ; i < n ; i++) cin>> words[i];
    for(int i = 0 ; i < n ; i++) cin>> groups[i];
    
    // printing the answer from the returned value of the function
    for(auto x : getWordsInLongestSubsequence(n , words, groups)){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}