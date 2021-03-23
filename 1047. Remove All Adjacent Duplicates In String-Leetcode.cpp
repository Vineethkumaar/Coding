class Solution {
public:
    string removeDuplicates(string S) {
        
       string res="";
       stack<char> st;
            
        for(int i=0 ; i<S.length() ; i++)
        {
            if(st.empty())
            st.push(S[i]);
            else
                if(st.top()==S[i])
                    st.pop();
                else
                    st.push(S[i]);
        }
        
        
        
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        
        reverse(res.begin(),res.end());
    
        
        return res;
        
    }
};
