class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> r1 {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
        unordered_set<char> r2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> r3 { 'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
        int n = words.size();
        vector<string> res;
        
        for(int i=0; i<n; i++){
            string str = words[i];
            int l = str.length();
            int alphabet=0, criteria=0;
            char ch = tolower(str[0]);
            if(r1.count(ch)) criteria = l;
                else if(r2.count(ch)) criteria = 2*l;
                else if(r3.count(ch)) criteria = 3*l;
            
            for(int j=0; j<l; j++){
                ch = tolower(str[j]);
                if(r1.count(ch)) alphabet++;
                    else if(r2.count(ch)) alphabet += 2;
                    else if(r3.count(ch)) alphabet += 3;
                
            }
            if(alphabet == criteria) res.push_back(str);
        }
        
        return res;
    }
};