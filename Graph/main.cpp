#include <iostream>
#include "BFS.h"

using namespace std;

int main()
{
    BFS g(6);
    g.populate_matrix();
    g.display();
    g.traverse(1);

    return 0;
}
