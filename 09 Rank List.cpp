#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int problems[55];
    int penalty[55];


    for (int i = 0; i < n; i++)
    {
        cin >> problems[i] >> penalty[i];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            bool should_swap = false;

            if (problems[j] > problems[i])
            {

                should_swap = true;
            }
            else if (problems[j] == problems[i] && penalty[j] < penalty[i])
            {

                should_swap = true;
            }

            if (should_swap)
            {

                int temp_problems = problems[i];
                problems[i] = problems[j];
                problems[j] = temp_problems;


                int temp_penalty = penalty[i];
                penalty[i] = penalty[j];
                penalty[j] = temp_penalty;
            }
        }
    }


    int target_problems = problems[k - 1];
    int target_penalty = penalty[k - 1];


    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (problems[i] == target_problems && penalty[i] == target_penalty)
        {
            count = count + 1;
        }
    }

    cout << count;

    return 0;
}
