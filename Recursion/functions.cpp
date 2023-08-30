#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[], int n)
{
    if(i == n/2)
    {
        return;
    }
    
    swap(arr[i], arr[n-i-1]);
    reverse(i+1, arr, n);
}

int main()
{
    int n = 5;
    int arr[n] = {5,4,3,2,1};
    reverse(0, arr, n);
    cout << "Array after reversing: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
