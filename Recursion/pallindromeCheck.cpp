#include<bits/stdc++.h>
using namespace std;

bool pallindrome(int i, string &s, int n)
{
    //base case
    if (i >= s.size() / 2) 
    {
        return true;
    }
    
    if(s[i] != s[n-1-i])
    {
        return false;
    }

    return pallindrome(i+1, s, n);
}

int main()
{
    string s =  "civic";

    bool ans = pallindrome(0, s, s.size());

    cout << ans;
}
