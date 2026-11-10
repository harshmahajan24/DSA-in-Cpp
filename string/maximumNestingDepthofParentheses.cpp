//leetcode oriented code

class Solution {
   public:
    int maxDepth(string s) {
        int count = 0;
        int maxNestedDepth = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                count++;

            } else if (s[i]==')') {
                count--;
            }
            maxNestedDepth = max(count, maxNestedDepth);
        }

        return maxNestedDepth;
    }
};

