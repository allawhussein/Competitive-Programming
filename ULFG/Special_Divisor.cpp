#include <bits/stdc++.h>
using namespace std;

int main()
{
        vector <long long> v(200000, 1e12);
        int cnt = 0 ;
        for (int i = 1; i < v.size(); i++) g = __gcd(g, v[i]);
        for (long long i = 1; i * i <= g; i++)
        {
                if (g%i == 0) 
                {
                        cnt++;
                        if (g/i == i) continue;
                        cnt++;
                }
        }
        
        cout<<cnt<<endl;
        return 0;
}
