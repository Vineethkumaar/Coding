class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> res;
        
        
        for(int i=0; i<words.size();i++)
        {
            string temp="";
            for(int j=0;j<words[i].length();j++)
            {
                temp=temp + s[words[i][j]-'a'];
            }
            res.insert(temp);
        }
        
        
        return res.size();
    }
};
