#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N;
    cin >> M >> N;

    priority_queue<int> pq;

    for (int i = 0; i < M; ++i)
    {
        int seats;
        cin >> seats;
        pq.push(seats);
    }

    long long total = 0;

    for (int i = 0; i < N; ++i)
    {
        int best = pq.top();
        pq.pop();

        total += best;

        if (best > 1)
        {
            pq.push(best - 1);
        }
    }

    cout << total << '\n';

    return 0;
}
