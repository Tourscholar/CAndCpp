#include <stdio.h>

#define MAX_VERtEX_NUM 1000
#define VRType int 
#define InfoType char
#define VertexType int 

typedef enum{false, true}bool;
bool visited[MAX_VERtEX_NUM];

typedef struct 
{
    VRType adj;
    InfoType * info;
}ArcCell, AdjMatrix[MAX_VERtEX_NUM][MAX_VERtEX_NUM];

typedef struct 
{
    VertexType vexs[MAX_VERtEX_NUM];
    AdjMatrix arcs;
    int vexnum, arcnum;
}MGraph;

int LocateVex(MGraph * G, VertexType v)
{
    int i = 0;
    for (; i < G->vexnum; i++)
    {
        if (G->vexs[i] == v)
        {
            break;
        }
    }

    if (i > G-> vexnum)
    {
        printf("no such vertex.\n");
        return -1;
    }
    return i;
}

void CreateDN(MGraph * G)
{
    scanf("%d %d", &(G->vexnum), &(G->arcnum));
    for (int i = 0; i < G->vexnum; i++)
    {
        (G->vexs[i]) = i+1;
    }
    for (int i = 0; i < G->vexnum; i++) {
        for (int j = 0; j < G->vexnum; j++) {
            G->arcs[i][j].adj = 0;
            G->arcs[i][j].info = NULL;
        }
    }

    for (int i = 0; i < G->arcnum; i++)
    {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        int n = LocateVex(G, v1);
        int m = LocateVex(G, v2);
        if (m == -1 || n == -1)
        {
            printf("no this vertex\n");
            return;
        }
        G->arcs[n][m].adj = 1;
        G->arcs[m][n].adj = 1;
    }
}

int FirstAdjVex(MGraph G, int v)
{
    for (int i = 0; i < G.vexnum; i++)
    {
        if (G.arcs[v][i].adj)
        {
            return i;
        }
    }
    return -1;
}

int NextAdjVex(MGraph G, int v, int w)
{
    for (int i = w + 1; i < G.vexnum; i++)
    {
        if (G.arcs[v][i].adj)
        {
            return i;
        }
    }
    return -1;
}

void visitVex(MGraph G, int v)
{
    printf("%d ", G.vexs[v]);
}

void DFS(MGraph G, int v)
{
    visited[v] = true;
    visitVex(G, v);
    for (int w = FirstAdjVex(G,v); w >= 0; w = NextAdjVex(G,v, w))
    {
        if (!visited[w])
        {
            DFS(G, w);
        }
    }
}

void DFSTraverse(MGraph G)
{
    int v;
    for (v = 0; v < G.vexnum; ++v)
    {
        visited[v] = false;
    }

    for (v = 0; v < G.vexnum; v++)
    {
        if (!visited[v])
        {
            DFS(G, v);
        }
    }
}

int main()
{
    MGraph G;
    CreateDN(&G);
    DFSTraverse(G);
    return 0;
}