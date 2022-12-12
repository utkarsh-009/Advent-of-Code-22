#include <bits/stdc++.h>
#include <sstream>
#define ll long long
#define mod 1000000007
using namespace std;

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
#ifndef ONLINE_JUDGE
    freopen("test.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    int t = 146;

    int ans = 0;
    int cycles = 0, x = 1;

    vector<string> signals;
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        signals.push_back(s);
    }

    int i = 0;
    while (cycles <= 20)
    {
        string s = signals[i];
        if (s[i] == 'a' && cycles + 2 <= 20)
        {
            x += strToint(s);
            cycles += 2;
        }
        else if (s[i] == 'a' && cycles + 1 == 20)
        {
            cycles++;
        }
        else
        {
            cycles++;
        }
        i++;
    }
    ans += x * 20;

    // cout << ans;
    x = 0;

    while (20 < cycles && cycles <= 60)
    {
        string s = signals[i];
        if (s[i] == 'a' && cycles + 2 <= 60)
        {
            x += strToint(s);
            cycles += 2;
        }
        else if (s[i] == 'a' && cycles + 1 <= 60)
        {
            cycles++;
        }
        else
        {
            cycles++;
        }

        i++;
    }
    ans += x * 60;
    x = 0;

    while (60 < cycles && cycles <= 100)
    {
        string s = signals[i];
        if (s[i] == 'a' && cycles + 2 <= 100)
        {
            x += strToint(s);
            cycles += 2;
        }
        else if (s[i] == 'a' && cycles + 1 <= 100)
        {
            cycles++;
        }
        else
        {
            cycles++;
        }

        i++;
    }
    ans += x * 100;
    x = 0;

    while (100 < cycles && cycles <= 140)
    {
        string s = signals[i];
        if (s[i] == 'a' && cycles + 2 <= 140)
        {
            x += strToint(s);
            cycles += 2;
        }
        else if (s[i] == 'a' && cycles + 1 <= 140)
        {
            cycles++;
        }
        else
        {
            cycles++;
        }

        i++;
    }
    ans += x * 140;
    x = 0;

    while (140 < cycles && cycles <= 180)
    {
        string s = signals[i];
        if (s[i] == 'a' && cycles + 2 <= 180)
        {
            x += strToint(s);
            cycles += 2;
        }
        else if (s[i] == 'a' && cycles + 1 <= 180)
        {
            cycles++;
        }
        else
        {
            cycles++;
        }

        i++;
    }
    ans += x * 180;
    x = 0;

    while (180 < cycles && cycles <= 220)
    {
        string s = signals[i];
        if (s[i] == 'a' && cycles + 2 <= 220)
        {
            x += strToint(s);
            cycles += 2;
        }
        else if (s[i] == 'a' && cycles + 1 <= 220)
        {
            cycles++;
        }
        else
        {
            cycles++;
        }

        i++;
    }
    ans += x * 220;
    x = 0;

    cout << ans;
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