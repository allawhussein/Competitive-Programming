//this application will check x times if q numbers belong to n intervals

//we have to check avialalbe time complexities of avaialble algorithms to apply on this exercise, for
//each constrain; 1000 & 10^6

//the first algorithm for 10^3 is composed of taking N elemnts and then testing every element q for every
//interval n <a, b>; time complexity NQ+NQ

//the secont alogrithm for 10^6 is achieved by using the cummualative sum of the array; time complexity
//N+Q
#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n, q;
        cin>>n>>q;
        vector <int> v(1e5 + 5, 0);//check why +5

        //taking the input
        while (n--)
        {
                int a, b;
                cin>>a>>b;

                v[a] ++;
                v[b + 1]--;
        }

        //cummualative sum part
        for (int i = 1; i < 100005; i++) v[i]+= v[i - 1];

        //displaying the result
        while (q--)
        {
                int x;
                cin>>x;
                cout<<v[x]<<endl;
        }

        return 0;
}