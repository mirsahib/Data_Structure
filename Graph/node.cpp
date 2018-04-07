#include "node.h"

bool node::isVisited(){
    return visited;
}
void node::setData(int d){
    data = d;
}
void node::setVisited(bool v){
    visited = v;
}

