class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {

        // Check Flush
        bool flush = true;
        bool three = false;
        bool pair = false;

        for (int i = 1; i < 5; i++) {
            if (suits[i] != suits[0]) {
                flush = false;
                break;
            }
        }

        unordered_map<int, int> freq;

        for (int rank : ranks) {
            freq[rank]++;
        }

        for (auto it : freq) {
            if (it.second >= 3) {
                three = true;
            }
            else if (it.second >= 2) {
                pair = true;
            }
        }

        if (flush)
            return "Flush";

        if (three)
            return "Three of a Kind";

        if (pair)
            return "Pair";

        return "High Card";
    }
};