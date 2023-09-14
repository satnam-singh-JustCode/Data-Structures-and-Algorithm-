class Solution {
public:
    string solve(string s,string x){
        if(s == "0" or x == "0") return "0"; 
        reverse(s.begin(),s.end());
        reverse(x.begin(),x.end());
        vector<int> v(s.size()+x.size(),0);
        for(int i=0;i<s.size();i++){
            for(int j=0;j<x.size();j++){
                int digit = (s[i]-'0')*(x[j]-'0');
                v[i+j] +=digit;
                v[i+j+1] += (v[i+j] / 10);
                v[i+j] = v[i+j] % 10;
            }
        }
        reverse(v.begin(),v.end());
        for(auto i: v) cout<<i<<" ";
        string a="";
        int i=0;
        while(i<v.size() and v[i] == 0) i++;
        for(i+1;i<v.size();i++){
           a +=to_string(v[i]);
        }
     return a;
    }
    string multiply(string num1, string num2) {
        return solve(num1,num2);
    }
};