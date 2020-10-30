class Solution {
public:
    bool judgeCircle(string moves) {
        
   //   vector<vector<int>> v(moves.size(),vector<int>(moves.size(),0));
        
        
        int x=0,y=0;
        
        for(int i=0 ; i<moves.size();i++)
         if(moves[i]=='R')
                x++;
        else if(moves[i]=='L')
            x--;
        else if(moves[i]=='U')
            y++;
        else if(moves[i]=='D')
            y--;
        cout<<x<<y;
        return x==0&&y==0;
            
        
    }
};
