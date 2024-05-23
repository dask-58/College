class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int rr = 0, cc = c - 1;
        while (r > rr && cc > -1) {
            if (target == matrix[rr][cc]) return true;
            if (target > matrix[rr][cc]) rr++;
            else cc--;
        }
        return false;
    }
};
