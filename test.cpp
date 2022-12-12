#include <bits/stdc++.h>
#include <sstream>
#define ll long long
#define mod 1000000007
using namespace std;

/*
[D]                     [N] [F]
[H] [F]             [L] [J] [H]
[R] [H]             [F] [V] [G] [H]
[Z] [Q]         [Z] [W] [L] [J] [B]
[S] [W] [H]     [B] [H] [D] [C] [M]
[P] [R] [S] [G] [J] [J] [W] [Z] [V]
[W] [B] [V] [F] [G] [T] [T] [T] [P]
[Q] [V] [C] [H] [P] [Q] [Z] [D] [W]
 1   2   3   4   5   6   7   8   9
*/

int strToint(string s)
{
    int ans;
    string num = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (isdigit(s[i]))
        {
            num += s[i];
        }
    }

    istringstream(num) >> ans;

    return ans;
}

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day5INPUT.txt", "r", stdin);
    //     // freopen("output.txt", "w", stdin);
    // #endif

    string s;
    getline(cin, s);
    int num = strToint(s);

    cout << num;
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