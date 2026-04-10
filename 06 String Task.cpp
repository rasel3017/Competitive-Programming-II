#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";

    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(c >= 'A' && c <= 'Z')
        {
            c = c + ('a' - 'A');
        }
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
            {
                continue;
            }
        else
        {
           result = result + '.';
           result = result + c;
        }
    }
    cout << result;

    return 0;
}
