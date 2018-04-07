#ifndef NODE_H_
#define NODE_H_

class node{
private:
int data;
bool visited;

public:
bool isVisited();
void setData(int d);
void setVisited(bool v);
};
#endif
