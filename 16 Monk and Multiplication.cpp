#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    priority_queue<long long> maxHeap;

    for (int i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        maxHeap.push(x);

        if (i < 2)
        {
            cout << "-1\n";
        }
        else
        {

            long long first  = maxHeap.top();
            maxHeap.pop();
            long long second = maxHeap.top();
            maxHeap.pop();
            long long third  = maxHeap.top();
            maxHeap.pop();

            cout << first * second * third << "\n";

            maxHeap.push(first);
            maxHeap.push(second);
            maxHeap.push(third);
        }
    }

    return 0;
}
