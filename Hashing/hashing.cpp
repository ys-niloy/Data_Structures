#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[7] = {2, 4, 6, 8, 6, 8, 8};
    
    vector<int> hash(n+1, 0);

    //fetching
    for(int i = 0; i< n; i++)
    {
        hash[arr[i] - 1]++;
    }

    for(int i = 0; i< n+1; i++)
    {
        cout << hash[i];
    }

    return 0;
}
