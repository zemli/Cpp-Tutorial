class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unsigned char forward_map[256] = {}, reverse_map[256] = {}; 
        //complexity of accessing elements in an array is constant, comparing Logarithmic in the size of the map
        for ( int i=0; i < n; ++i)
        {
            unsigned char c1 = s[i];
            unsigned char c2 = t[i];
            
            if ( forward_map[c1] && forward_map[c1] != c2)
                return false;
            
            if ( reverse_map[c2] && reverse_map[c2] != c1)
                return false;
            
            forward_map[c1] = c2; //elements in both strings map to each other
            reverse_map[c2] = c1;
        }
        
        return true;
        
    }
};