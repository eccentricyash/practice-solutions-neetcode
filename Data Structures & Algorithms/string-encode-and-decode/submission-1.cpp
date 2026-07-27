class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(auto& e: strs){
            int n=e.length();
            encoded+=to_string(n)+"#"+e;

        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        int j;
        while(i<s.size()){
            j=i;
            while(s[j]!='#') j++;
            int length=stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,length));
            i=1+j+length;
        }
        return ans;

    }
    
};
