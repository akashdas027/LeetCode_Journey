class Solution {
public:
    int romanToInt(string s) {
             int total = 0;

        for (int i = 0; i < s.length(); i++) {
            int curr = getValue(s[i]);

            if (i + 1 < s.length()) {
                int next = getValue(s[i + 1]);

                if (curr < next)
                    total -= curr;
                else
                    total += curr;
            } else {
                total += curr;
            }
        }

        return total;
    }

private:
    int getValue(char ch) {
        if (ch == 'I') return 1;
        if (ch == 'V') return 5;
        if (ch == 'X') return 10;
        if (ch == 'L') return 50;
        if (ch == 'C') return 100;
        if (ch == 'D') return 500;
        if (ch == 'M') return 1000;
        return 0; 
    }
};