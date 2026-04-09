#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    vector<long long> coins(n);

    for(int i=0; i<n; i++)
    {
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    long long max_reachable = 0;

    for(int i=0; i<n; i++)
    {
        if(coins[i] > max_reachable + 1)
        {
            cout << max_reachable + 1;
            return 0;
        }
        max_reachable = max_reachable + coins[i];
    }

    cout << max_reachable + 1;

    return 0;
}
