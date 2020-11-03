class Solution {
public:
    bool isPathCrossing(string s) {
        
        int x=0,y=0,c=0;
        unordered_map<int,unordered_set<int> > mp;
        mp[x].insert(y);
        
        for(int i=0 ; i<s.size(); i++)
        {
            
            if(s[i]=='N')
                y++;
             else if(s[i]=='E')
                x++;
             else if(s[i]=='W')
                x--;
             else if(s[i]=='S')
                y--;
            
         if (mp[x].count(y)) {
                return true;
            }
            mp[x].insert(y);  
        }
          
        return false;
            
    }
};
