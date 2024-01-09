class Solution {
public:
    void revStr(string &s, int first , int last)
    {
        if(last>s.size()-1)
            last=s.size();
        int start=first;
        int end=last-1;
        while(start<end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    string reverseStr(string s, int k) 
    {
        for(int i=0;i<s.size();i=i+2*k)
            revStr(s,i,i+k);
        return s;
    }
};
