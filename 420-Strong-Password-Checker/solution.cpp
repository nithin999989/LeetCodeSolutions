class Solution {
public:
    int strongPasswordChecker(string s) {
        bool mislchar, misdigit, misuchar;
        mislchar = misdigit = misuchar = true;
        for (auto & c : s) {
            if (isdigit(c))         misdigit = false;
            else if (islower(c))    mislchar = false;
            else if (isupper(c))    misuchar = false;
        }
        int missnum = mislchar + misuchar + misdigit;
        int done = 0, dtwo = 0, replace = 0;
        for (int i = 2; i < s.size(); i++) {
            if (s[i] == s[i - 1] && s[i - 1] == s[i - 2]) {
                int len = 3;
                while (i + 1 < s.size() && s[i + 1] == s[i]) {
                    i++; len++;
                }
                if (len % 3 == 0)       done++;
                else if (len % 3 == 1)  dtwo++;
                replace += len / 3;
            }
        }

        if (s.size() < 6) {
            return max(6 - (int)s.size(), missnum);
        } else if (s.size() <= 20) {
            return max(replace, missnum);
        } else {
            int del = s.size() - 20;
            replace -= min(del, done);
            if (del - done > 0) {
                replace -= min((del - done) / 2, dtwo);
            }
            if (del - done - 2 * dtwo > 0) {
                replace -= (del - done - 2 * dtwo) / 3;
            }
            return del + max(replace, missnum);
        }
    }
};