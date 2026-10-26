class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(string str: strs){
            s = s+ to_string(str.length()) +'#'+ str;

        }
        return s;
        

    }

    vector<string> decode(string s) {
        vector<string> result;

        for(int i =0; i<s.length(); ){
            int posOfhash = s.find('#', i);
            string  lenStr = s.substr(i, posOfhash-i);
            int len = stoi(lenStr);
            string str = s.substr(posOfhash+1, len );
            result.push_back(str);
            i = posOfhash+ len+ 1;
        }

        return result;


    }
};
