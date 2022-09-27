#include <bits/stdc++.h>

using namespace std;

int main()
{
        vector < vector < vector <int> > > matrix1, matrix2, matrix3;
        int n;

        cin>>n;
        
        for (int i = 0; i < n; i++)
        {
                vector < vector <int> > dim2;
                for (int j = 0; j < n; j++)
                {
                        vector <int> dim1;
                        for (int k = 0; k < n; k++)
                        {
                                int temp;
                                dim1.push_back(temp);
                        }
                        dim2.push_back(dim1);
                }
                matrix1.push_back(dim2);
        }

        for (int i = 0; i < n; i++)
        {
                vector < vector <int> > dim2;
                for (int j = 0; j < n; j++)
                {
                        vector <int> dim1;
                        for (int k = 0; k < n; k++)
                        {
                                int temp;
                                cin>>temp;
                                dim1.push_back(temp);
                        }
                        dim2.push_back(dim1);
                }
                matrix2.push_back(dim2);
        }
        
        for (int i = 0; i < n; i++)
        {
                vector < vector <int> > dim2;
                for (int j = 0; j < n; j++)
                {
                        vector <int> dim1;
                        for (int k = 0; k < n; k++)
                        {
                                int temp;
                                dim1.push_back(temp);
                        }
                        dim2.push_back(dim1);
                }
                matrix2.push_back(dim2);
        }

        for (vector<vector<vector<int>::iterator dim3 = matrix1.begin(); dim3 != matrix1.end(); dim3++)
        {
                vector<vector<int>::iterator dim2;
                for (dim2 = )
        }
        return 0;
}