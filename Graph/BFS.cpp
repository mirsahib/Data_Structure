#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <queue>
#include "BFS.h"
#include "node.h"

using namespace std;


BFS::BFS(int noOfelement){
    this->v = noOfelement;
    this->matrix = new int*[v];
    for(int i=0;i<v;i++){
        matrix[i]=new int[v];
    }
    this->arr = new node[noOfelement];

    for(int i=0;i<noOfelement;i++){
        this->arr[i].setData(i);
        this->arr[i].setVisited(false);
    }
}

BFS::~BFS(){
    for(int i=0;i<this->v;i++){
        delete[] this->matrix[i];
    }
    delete[] this->matrix;
    delete[] this->arr;
}


void BFS::populate_matrix(){
    int num;
    for(int i=0;i<this->v;i++){
        for(int j=i;j<this->v;j++){
            num=rand()%2;
            if(i==j){
                this->matrix[i][j]=1;
            }else{
                this->matrix[i][j]=num;
                this->matrix[j][i]=num;
            }
        }
    }
}
void BFS::traverse(int source){
    queue<int>node_list;
    if(source<this->v){
        if(!this->arr[source].isVisited()){
            node_list.push(source);
            this->arr[source].setVisited(true);
        }
    }
    while(!node_list.empty()){
        cout<<source<<" ";
        for(int i=0;i<this->v;i++){
            if(this->matrix[source][i] && !this->arr[i].isVisited()){
                node_list.push(i);
                this->arr[i].setVisited(true);
            }
        }
        node_list.pop();
        source = node_list.front();
    }
}

void BFS::display(){
    for(int i=0;i<this->v;i++){
        for(int j=0;j<this->v;j++){
            cout<<setw(3)<<matrix[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
}
