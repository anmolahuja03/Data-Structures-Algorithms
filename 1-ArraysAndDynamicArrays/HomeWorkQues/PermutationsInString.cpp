class Solution {
public:

    bool checkAnagram(int freq1[], int freq2[]){
        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        
        if(m < n){
            return false;
        }
        
        // Declaring the freq array of each string
        // freq1 stores freq count for s1
        // freq2 stores freq count for the current window of s2
        int freq1[30], freq2[30];   
        
        for(int i=0; i<26; i++){
            freq1[i] = freq2[i] = 0;
        }
        
        // Updating freq array of s1
        for(int i=0; i<n; i++){
            freq1[s1[i] - 'a']++;
        }
        
        // Updating freq array for first window of s2
        for(int i=0; i<n; i++){
            freq2[s2[i] - 'a']++;
        }
        
        // Comparing & checking if first window is a permutation
        if(checkAnagram(freq1, freq2)){
            return true;
        }
        
        int window_end = n;
        // Adding and removing element to get new freq
        while(window_end < m){
            freq2[s2[window_end] - 'a']++;
            freq2[s2[window_end - n] - 'a']--;
            
        // Checking if current window is anagram or not
        if(checkAnagram(freq1, freq2)){
            return true;
        }
        
        // Move window forward
        window_end++;;
            
        }
        
        return false;
    }
};