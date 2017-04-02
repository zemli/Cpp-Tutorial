class Solution {
public:
    string simplifyPath(string path) {
        vector<string> vec;
        string result="", token;
        stringstream ss(path); //string stream
        
        while(getline(ss, token, '/')){ //getline function. char '/' as a delimiter
            if(token == "" || token == ".") continue;
            else if(token == ".."){
                if(vec.size() != 0){
                    vec.pop_back();
                }
            }
            else vec.push_back(token);
        }
        if(vec.size() == 0) return "/";
        for(auto s:vec){
            result += '/' + s;
        }
        return result;
    }
};