class Solution {
public:
    void reverseString(vector<char>& s) {
        
        rev(s,0);
        
    }
    void rev(vector<char> &s ,int n)
    {
        if(n==s.size()/2)
        return;
        
        swap(s[n],s[s.size()-n-1]);
        rev(s,n+1);
        return;
    }
};
