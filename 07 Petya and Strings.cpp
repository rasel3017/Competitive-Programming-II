#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    for(int i=0; i<str1.length(); i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] = str1[i] + ('a' - 'A');
        }
    }

    for(int i=0; i<str2.length(); i++)
    {
        if(str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] = str2[i] + ('a' - 'A');
        }
    }

    if(str1 < str2)
    {
        cout << -1;
    }
    else if(str1 > str2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
