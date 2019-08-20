//
// Created by zj on 19-8-19.
//

#ifndef CPLUSPLUS_UNDIGRAPH_H
#define CPLUSPLUS_UNDIGRAPH_H

#include <iomanip>
#include <algorithm>
#include <iostream>
#include <queue>
#include "common_iostream.h"
#include "graph.h"

/**
 * 无向图，实现操作如下：
 * 1. 图数据载入
 * 2. 深度/广度优先便利
 * 3. 最小生成树创建
 */
class Undigraph {

public:
    void CreateMGraph(MGraph *G);

    void CreateGraphAdjList(GraphAdjList *G);

    void PrintMGraph(MGraph G);

    void PrintGraphAdjList(GraphAdjList G);

    int *DFSTraverse(MGraph G);

    int *DFSTraverse(GraphAdjList G);

    int *BFSTraverse(MGraph G);

    int *BFSTraverse(GraphAdjList G);

    void MiniSpanTree_Prim(MGraph G);

    void MiniSpanTree_Prim(GraphAdjList G);

    void MiniSpanTree_Kruskal(MGraph G);

    void MiniSpanTree_Kruskal(GraphAdjList G);

private:

    void DFS(MGraph G, int up, int *index);

    void DFS(GraphAdjList G, int up, int *index);

    static bool less_second(Edge x, Edge y);

    int Find(int *parent, int f);

    bool visited[MAXVEX];
    int ordered[MAXVEX];
};


#endif //CPLUSPLUS_UNDIGRAPH_H
