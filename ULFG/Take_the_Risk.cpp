#include <bits/stdc++.h>
using namespace std;

float shaded (vector <float> vx, vector <float> vy)
{
        float tx, ty;
        float v1, v2, v3, v4;

        v1 = min(vx[1], vx[3]);
        v2 = max(vx[0], vx[2]);
        v3 = min(vy[1], vy[3]);
        v4 = max(vy[0], vy[2]);

        tx = v1 -  v2;
        if (v1 <= 0 && v2 <= 0) tx = -tx;
        ty = v3 -  v4;
        if (v3 <= 0 && v4 <= 0) ty = -ty;

        cout<<v1<<" "<<v2<<" "<<v3<<" "<<v4<<endl;

        if (tx > 0 && ty > 0) return tx * ty;
        return 0;
}

int main()
{
        vector <float> vx(4);
        vector <float> vy(4);
        float tx, ty;
        float c = sqrt(2) / 2;

        for (int i = 0; i < 4; i++) 
        {
                cin>>tx;
                cin>>ty;

                vx[i] = c*tx - c*ty;
                vy[i] = c*tx + c*ty;
        }

        for (int i = 0; i < 4; i++) cout<< vx[i]<<" "<<vy[i]<<endl;

        vector<float> area(3);
        area[0] = abs((vy[1] - vy[0]) * (vx[1] - vx[0]));
        area[1] = abs((vy[3] - vy[2]) * (vx[3] - vx[2]));
        area[2] = shaded(vx, vy);

        
        cout<<area[0]<<" "<<area[1]<<" "<<area[2]<<endl;

        cout<<area[2] / (area[0] + area[1] - area[2])<<endl;
        
        
        if ((area[2] / (area[0] + area[1] - area[2])) < 0.25)
        {
                cout<<"Jump"<<endl;
                return 0;
        }
        cout<<"Don't Jump"<<endl;
        return 0;
}