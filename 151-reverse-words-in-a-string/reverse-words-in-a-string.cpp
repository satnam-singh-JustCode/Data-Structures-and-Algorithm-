class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        int n = s.size();
        int start = 0;
        while(i<n){
            while(i<n and s[i] == ' ') i++;
            if(i<n and j>0){ s[j] = ' '; j++;}
            start = j;
            while(i<n and s[i]!=' '){s[j] = s[i]; j++;i++;}
            reverse(s.begin()+start,s.begin()+j); 
        }
        s.resize(j); // for removing the last spaces, we are resizing the string.
        reverse(s.begin(),s.end());
        return s;
    }
};