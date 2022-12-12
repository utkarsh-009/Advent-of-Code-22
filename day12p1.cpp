#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int pathFind(vector<vector<int>> hMap, int i, int j, int &prev, vector<vector<bool>> &visi)
{
    if (i < 0 || j < 0 || i > 40 || j > 79 || visi[i][j] == true)
    {
        return INT_MAX;
    }

    if (hMap[i][j] == prev + 1 && hMap[i][j] == 26)
    {
        return 0;
    }

    if (hMap[i][j] == prev || hMap[i][j] == prev + 1)
    {
        visi[i][j] = true;
        return 1 + min(pathFind(hMap, i + 1, j, hMap[i][j], visi),
                       min(pathFind(hMap, i, j + 1, hMap[i][j], visi),
                           min(pathFind(hMap, i - 1, j, hMap[i][j], visi),
                               pathFind(hMap, i, j - 1, hMap[i][j], visi))));
    }

    return -1;
}

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("test.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    // char hMap[41][79];
    vector<vector<int>> hMap;
    vector<vector<bool>> visi(40, vector<bool>(79, false));
    for (int i = 0; i < 41; i++)
    {
        vector<int> v;
        for (int j = 0; j < 80; j++)
        {
            char c;
            cin >> c;

            v.push_back(c - 'a' + 1);
        }

        hMap.push_back(v);
    }

    int prev = 0;
    cout << pathFind(hMap, 0, 0, prev, visi);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/