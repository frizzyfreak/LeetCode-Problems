class Solution {
public:
    vector<int> PascalTriangle(int n){
    vector<int> row;
    long long res = 1;
    row.push_back(res);
        for (int i = 0; i < n; i++) {
                res = res * (n - i);
                res = res / (i + 1);
                row.push_back(res);
            }
            return row;
    }

    vector<int> getRow(int rowIndex) {
        return PascalTriangle(rowIndex);
        }
};
