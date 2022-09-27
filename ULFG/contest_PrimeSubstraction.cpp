#include <bits/stdc++.h>

using namespace std;

bool isprime(long long int x)
{
        for (int i = 2; i < sqrt(x); i++)
        {
                if (x%i == 0)
                {
                        return false;
                }
        }
        return true;
}

int main()
{
        int tc;
        cin>> tc;

        while (tc--)
        {
                long long int x, y;
                bool found = false;
                cin>>x>>y;
                long long z = x - y;

                if (z == 1)
                {
                        count<<"NO"<<endl;
                        continue;
                }
                if (z==2)
                {
                        cout<<"YES"<<endl;
                        continue;
                }

                if (isprime(z))
                {
                        cout<<"YES"<<endl;
                        continue;
                }
                for (int i = 2; i < sqrt(z); i++)
                {
                        if (z&p == 0 && isprime(p))
                        {
                                cout<<"YES"<<endl;
                                found = true;
                                break;
                        }
                }
                if (!found)
                {
                        cout<<"NO"<<endl;
                }

        }

        return 0;
}