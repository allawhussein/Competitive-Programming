#include <bits/stdc++.h>
using namespace std;

int main()
{
        int c, e, n, w;//c = number of nodes//e = number of edges for a given node //n = connected node to give node
        //w = connected node weight to a give node
        cin>>c;
        vector < pair < int, int > > v[c];
        int dist[c];

        for (int i = 0; i < c; i++)
        {
                cout<<"node"<<i<<endl;
                cin>>e;
                for (int j = 0; j < e; j++)
                {
                        cin>>n>>w;
                        v[i].push_back(make_pair(n, w));
                }
        }

        
        for (int i = 1; i < c; i++)
        {
                dist[0] = 0;
                dist[i] = 1000;
        }

        for (int i = 0; i < c-1; i++)//v-1 loop
                for (int j = 0; j < c; j++)//iterate through edges
                        for (int k = 0; k < v[j].size(); k++)//iterate through nodes
                                if (dist[v[j][k].first] > dist[k] + v[j][k].second)
                                        dist[v[j][k].first] = dist[k] + v[j][k].second;

        for (int i = 0; i < c; i++)
        {
                cout<<dist[i]<<endl;
        }
        return 0;
}