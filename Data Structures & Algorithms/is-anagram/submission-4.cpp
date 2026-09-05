#include <cmath>

class Solution {
public:
    bool isAnagram(string s, string t){

        if(s.length() != t.length()) return false; 
        else if ( s == t) return true; 
        
        double suma_chars_S = 0.0; 
        double suma_chars_T = 0.0; 

        for(int i = 0 ; i < s.length() ; ++i){

            suma_chars_S+= 1.0/(int)s.at(i); 
            suma_chars_T+= 1.0/(int)t.at(i); 
            
        }

        return abs(suma_chars_S - suma_chars_T) < 1e-9;  

    }
};
