
#ifndef BFS_H_
#define BFS_H_
#include "node.h"

class BFS{
private:
    int v;
    int** matrix;
    node* arr;
public:
    BFS();
    BFS(int v);
    void populate_matrix();
    void traverse(int source);
    void display();
    ~BFS();
};
#endif

