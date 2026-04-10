#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;


    if (n < 2)
    {
        cout << "NO";
        return 0;
    }


    vector<int> arr(n);


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    int smallest = arr[0];


    for (int i = 1; i < n; i++)
    {
        if (arr[i] > smallest)
        {
            cout << arr[i];
            return 0;
        }
    }


    cout << "NO";

    return 0;
}
