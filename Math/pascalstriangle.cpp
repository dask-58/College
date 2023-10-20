class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> p;
        for(int i = 0; i < numRows; i++){
            vector<int> c(i + 1, 1);
            for(int j = 1; j < i; j++){
                c[j] = p[j] + p[j - 1];
            }
            ans.push_back(c);
            p = c;
        }
        return ans;
    }
};