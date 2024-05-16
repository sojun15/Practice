#include<bits/stdc++.h>
using namespace std;
#define v 4
#define INF 9999
void print(int graph[][v])
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(graph[i][j]==INF)
            {
                cout<<"inf"<<"  ";
            }
            else
            {
                cout<<graph[i][j]<<"    ";
            }
        }
        cout<<endl;
    }
}
void floydWarshall(int graph[][v])
{
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if((graph[i][j]>graph[i][k]+graph[k][j]) && graph[i][k]!=INF && graph[k][j]!=INF)
                {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
    print(graph);
}
int main()
{
    int graph[][v] ={ { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };
    floydWarshall(graph);
}
