#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre compute
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;

        // fetch
        cout << mp[num] << endl;
    }

    return 0;
}
