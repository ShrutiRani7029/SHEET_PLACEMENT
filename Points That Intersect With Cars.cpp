class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> points; // Set to store covered points 
        
        for (const vector<int>& interval : nums) {
            for (int i = interval[0]; i <= interval[1]; i++) {
                points.insert(i); // Insert all points within the interval into the set
            }
        }

        return points.size(); // The size of the set contains the count of unique covered points
    }
};
