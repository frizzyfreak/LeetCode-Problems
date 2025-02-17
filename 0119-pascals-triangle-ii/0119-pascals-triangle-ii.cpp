class Solution {
public:
    int nCr(int n, int r) {
        long long res = 1;
        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
    }

    vector<int> getRow(int rowIndex) {
        vector<int> row;
        for (int col = 0; col <= rowIndex; col++) {  // Loop should go up to rowIndex
            row.push_back(nCr(rowIndex, col));      // Corrected function call
        }
        return row;  // Return the generated row
    }
};
