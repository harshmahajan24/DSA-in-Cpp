// leetcode oriented code

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int current = 0, next = 0;

            switch (s[i]) {
                case 'I': current = 1; break;
                case 'V': current = 5; break;
                case 'X': current = 10; break;
                case 'L': current = 50; break;
                case 'C': current = 100; break;
                case 'D': current = 500; break;
                case 'M': current = 1000; break;
            }

            if (i + 1 < s.length()) {
                switch (s[i + 1]) {
                    case 'I': next = 1; break;
                    case 'V': next = 5; break;
                    case 'X': next = 10; break;
                    case 'L': next = 50; break;
                    case 'C': next = 100; break;
                    case 'D': next = 500; break;
                    case 'M': next = 1000; break;
                }
            }

            if (current < next) {
                ans -= current;
            }
            else {
                ans += current;
            }
        }

        return ans;
    }
};