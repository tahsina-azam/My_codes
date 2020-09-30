    class Solution {
    public:
        vector<int> kmp(string &pattern, string &text) {
            string pat_text = pattern + "#" + text;
     
            vector<int> lps(pat_text.size());
            lps[0] = 0;
     
            int i = 1, j = 0;
     
     
            while(i < pat_text.size()) {
                if (pat_text[i] == pat_text[j]) {
                    lps[i] = j + 1;
     
                    i++;
                    j++;
                } else {
                    if (j == 0) {
                        lps[i] = 0;
                        i++;
                        j = 0;
                    } else {
                        j = lps[j - 1];
                    }
                }
            }
     
            return lps;
        }
     
        string shortestPalindrome(string s) {
            string rev = s;
            reverse(rev.begin(), rev.end());
     
            vector<int> lps = kmp(s, rev);
     
            //Just printing the lps and pat_text for fun :3
            //You can delete this block if you like
            string pat_text = s + "#" + rev;
            cout << pat_text << endl;
            for (int i = 0; i < pat_text.size(); i++) {
                cout << lps[i];
            }
            cout << endl;
     
            //back to the real code
            int palindrome_length = lps.back();
     
            int extra_length = s.length() - palindrome_length;
     
            string res = "";
            for (int i = 0; i < extra_length; i++) {
                res += rev[i];
            }
            res += s;
     
            return res;
        }
    };