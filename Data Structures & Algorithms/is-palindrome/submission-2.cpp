#include <cctype>
#include <string>

using namespace std;

    string limpiar_string(string s){
        string auxiliar=""; 
        for(int i = 0; i < s.size(); ++i){
            if(isalnum(s.at(i))){
                auxiliar+=s.at(i); 
            }
        }

        return auxiliar; 
    }

class Solution {
public:
    bool isPalindrome(string s) {

        string ss = limpiar_string(s); 
        int n = ss.size(); 
        int i = 0; 
        int j = n-1; 
 
        while( i < j ){

            char r1 = tolower(ss.at(i)); 
            char r2 = tolower(ss.at(j));
            if(  r1 != r2 ) return false;
            ++i; 
            --j; 
        }

        return true; 
    }
};
