//code forces question maximum squares
#include <bits/stdc++.h>
using namespace std;

int main()
{
        int k;
        int n;
        int in;

        vector<int> vect;

        cin>>k;

        while (k--)
        {
                cin>>n;
                for (int i = 0; i < n; i++)
                {
                        cin>>in;
                        if (in > n) in = n;
                        vect.push_back(in);
                }
                sort(vect.begin(), vect.end());

                int index;

                while (n--)
                {
                        index = vect[n+1];
                        if (vect[n+1] == vect[index]) 
                        {
                                cout<<vect[n+1]<<endl;
                                break;
                        }
                }
                
        }
        return 0;
}