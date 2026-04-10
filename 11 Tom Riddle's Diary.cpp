#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> seen;


    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;


        bool found = false;
        for (int j = 0; j < seen.size(); j++)
        {
            if (seen[j] == name)
            {
                found = true;
                break;
            }
        }


        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;

            seen.push_back(name);
        }
    }

    return 0;
}

