#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
        if (b) return GCD(b, a % b);
        return a;
}

int main()
{
        int lcm;
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin>>v[i];
        lcm = v[0];
        for (int i = 1; i < n; i++) lcm = lcm * v[i] / GCD(lcm, v[i]);
        cout<<n * lcm;
        cin>>n;
        return 0;
}