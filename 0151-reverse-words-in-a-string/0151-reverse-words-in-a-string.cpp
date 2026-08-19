class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(), s.end());
        int write=0;
        int read=0;
        while(read<n){
            if(s[read]!=' '){
                if(write !=0){
                    s[write++]=' ';
                }
                int wordStart = write;
                while (read < n && s[read]!= ' '){
                    s[write++] = s[read++];
                }
                reverse(s.begin() + wordStart, s.begin() + write);
            }else{
                read++;
            }
        }
        s.resize(write);
        return s;
    }
};