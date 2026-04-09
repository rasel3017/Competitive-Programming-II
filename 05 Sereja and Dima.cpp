#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> cards(n);

    for(int i=0; i<n; i++)
    {
        cin >> cards[i];
    }
    int left =0;
    int right = n-1;

    int sereja_score = 0;
    int dima_score =0;

    int turn = 1;

    while(left <= right)
    {
        int chosen_card;
        if(cards[left] > cards[right])
        {
            chosen_card = cards[left];
            left = left + 1;
        }
        else
        {
            chosen_card = cards[right];
            right = right - 1;
        }
        if(turn == 1)
        {
            sereja_score = sereja_score + chosen_card;
            turn = 2;
        }
        else
        {
            dima_score = dima_score + chosen_card;
            turn = 1;
        }
    }
    cout << sereja_score << " " << dima_score;

    return 0;
}
