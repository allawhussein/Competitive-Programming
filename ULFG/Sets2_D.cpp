#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, x, y;
        cin>>n>>x>>y;

        if (y >= x)
        {
                cout<<-1;
                return 0;
        }

        cout<<n / (x-y) - y / (x-y) + n % (x-y);
        return 0;
}