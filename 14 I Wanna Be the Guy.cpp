#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool can_pass[105];
    for (int i = 1; i <= n; i++)
    {
        can_pass[i] = false;
    }


    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        can_pass[level] = true;
    }


    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        can_pass[level] = true;
    }


    bool all_passed = true;
    for (int i = 1; i <= n; i++)
    {
        if (can_pass[i] == false)
        {
            all_passed = false;
            break;
        }
    }


    if (all_passed)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
