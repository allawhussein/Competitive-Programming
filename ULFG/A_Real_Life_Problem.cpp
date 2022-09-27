//the progress has been haulted by advise form adel haj hassan
#include <bits/stdc++.h>
using namespace std;

int main()
{
        string s1;
        vector < string > s2;
        string text;
        int typo;

        getline(cin, s1);
        cout<<"taken s1"<<endl;
        for (int i = 0; i < 26; i++)
        {
                string tempo;
                cin>>tempo;
                s2.push_back(tempo);
        }
        cout<<"taken dictionary"<<endl;
        
        getline(cin, text);
        getline(cin, text);
        cout<<"taken text"<<endl;
        for (int i = 0; i < sizeof(text); i++)
        {
                if (text[i] == ' ')
                cout<<' ';
                else
                cout<< s2 [ s1 [text[i] - 'a'] - 'a'];
        }

        cin>>typo;
        return 0;
}