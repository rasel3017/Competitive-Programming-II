#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum_of_given = 0;

    for(int i=1; i <= n -1; i++)
    {
        long long x;
        cin >> x;
        sum_of_given = sum_of_given + x;
    }

    long long expected_sum = n*(n+1)/2;
    long long missing = expected_sum - sum_of_given;

    cout << missing;

    return 0;
}
