#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    set<int> posr, posc;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                posr.insert(i);
                posc.insert(j);
            }
        }
    }
    vector<vector<int>> vec(matrix);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (posr.find(i) != posr.end() or posc.find(j) != posc.end())
                matrix[i][j] = 0;
        }
    }
}
int main(int argc, char const *argv[])
{

    return 0;
}
