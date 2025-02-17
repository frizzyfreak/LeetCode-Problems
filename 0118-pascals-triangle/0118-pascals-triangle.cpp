class Solution {
public:
vector<int>generateRow(int row)
{
    long long res=1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for (int col=1; col<row; col++)
    {
        res= res*(row-col);
        res =res/col;
        ansRow.push_back(res);
    }
    return ansRow;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int row=1;row<=numRows;row++)
        {
            res.push_back(generateRow(row));
        }
        return res;
    }
};