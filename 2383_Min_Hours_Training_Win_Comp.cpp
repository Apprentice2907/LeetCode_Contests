// My idea and then GPT refined code

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience,
                         vector<int>& energy, vector<int>& experience) {

        int ent = 0;
        int ext = 0;

        // Energy training
        int total = 0;
        for (int x : energy) {
            total += x;
        }

        if (initialEnergy <= total) {
            ent = total - initialEnergy + 1;
        }

        // Experience training
        int cur = initialExperience;

        for (int x : experience) {
            if (cur <= x) {
                int temp = x - cur + 1;
                ext += temp;
                cur += temp;
            }

            cur += x;
        }

        return ent + ext;
    }
};