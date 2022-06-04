class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //count occurence of every character
        vector<int> freqP(26,0);
        for(int i = 0; i<p.length(); i++){
            freqP[p[i]-'a']++;
        }
        
        int l = 0;
        int r = 0;
        
        vector<int> ans;
        vector<int> freqS(26,0);
        while(r < s.size()){
            //count occurence of every character
            freqS[s[r]-'a'] ++;     //including step
            
            if((r-l+1)<p.size()){
                r++;
            }
            else if((r-l+1) == p.size()){
                //calculation
                //occurence of S and P is equal
                if(freqS == freqP){
                    ans.push_back(l);
                }
                
                //declude
                freqS[s[l]-'a']--;
                
                //slide 
                l++;
                r++;
            }
        }
        return ans;
    }
};