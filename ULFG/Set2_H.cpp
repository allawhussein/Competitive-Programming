#include <bits/stdc++.h>
using namespace std;

int main()
{
        long long n, m = 7+10e9, fact = 1;
        cin>>n;
        n++;

        while (--n)
        {
                fact = ((fact%m) * (n%m))%m;
                cout<<fact<<endl;//not needed
                if (fact == 0)//not needed
                {//not needed
                        cout<<n<<endl;//not needed
                        break;//not needed
                }//not needed
        }
        cout<<"\n"<<fact;
}