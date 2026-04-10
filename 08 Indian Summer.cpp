#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> leaves;

    for(int i=0; i<n; i++)
    {
        string species, color;
        cin >> species >> color;

        string full_name = species + " " + color;

        leaves.push_back(full_name);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(leaves[i] > leaves[j])
            {
                string temp = leaves[i];
                leaves[i] = leaves[j];
                leaves[j] = temp;
            }
        }
    }

    int unique_count = 0;

    for(int i=0; i<n; i++)
    {
        if(i==0 || leaves[i] != leaves[i-1])
        {
            unique_count = unique_count + 1;
        }
    }

    cout << unique_count;

    return 0;
}
