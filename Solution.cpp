class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0;
        for (int& x : candies) {
            mx = max(mx, x);
        }
        vector<bool> res;
        for (int& x : candies) {
            if (x + extraCandies >= mx) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        return res;
    }
};
