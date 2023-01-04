/*



|----------------------------------------------------------GFG---------------------------------------------------------|

class Solution {
public:
    
    void combinations(string & digits, string & output, int i, vector<string>& result, unordered_map<char, string>& map){
        
        if(i == digits.size()){
            if(output.size() > 0){
                result.push_back(output);
            }
            
            return;
        }
        string str = map[digits[i]];
        
        for(int j = 0; j < str.size(); j++){
            output.push_back(str.at(j));
            combinations(digits, output, i+1, result, map);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string output;
        vector<string> result;
        
        unordered_map<char, string> map;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        
        combinations(digits, output, 0, result, map);
        
        return result;
    }
};

*/