#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("day8INPUT.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    int n;
    cin >> n;

    int treeH[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;

            int h = x - '0';
            treeH[i][j] = h;
        }
    }

    int visible = n * 2 + (n - 2) * 2;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            int curr_h = treeH[i][j];
            bool visU = true, visD = true, visL = true, visR = true;

            for (int k = 0; k < i && visU; k++)
            {
                if (curr_h <= treeH[k][j])
                {
                    visU = false;
                }
            }

            for (int k = i + 1; k < n && visD; k++)
            {
                if (curr_h <= treeH[k][j])
                {
                    visD = false;
                }
            }
            for (int k = 0; k < j && visL; k++)
            {
                if (curr_h <= treeH[i][k])
                {
                    visL = false;
                }
            }
            for (int k = j + 1; k < n && visR; k++)
            {
                if (curr_h <= treeH[i][k])
                {
                    visR = false;
                }
            }

            if (visU || visD || visL || visR)
            {
                visible++;
            }
        }
    }

    cout << visible;
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