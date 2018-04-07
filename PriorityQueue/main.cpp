#include <iostream>
#include "PriorityQueue.h"
#include "node.h"

using namespace std;

int main()
{
/*
    node e,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14;
    e.setCost(1);
    e.setId(0);
    e1.setCost(5);
    e1.setId(1);
    e2.setCost(1);
    e2.setId(2);
    e3.setCost(8);
    e3.setId(3);
    e4.setCost(6);
    e4.setId(4);
    e5.setCost(2);
    e5.setId(5);
    e6.setCost(2);
    e6.setId(6);
    e7.setCost(13);
    e7.setId(7);
    e8.setCost(12);
    e8.setId(8);
    e9.setCost(11);
    e9.setId(9);
    e10.setCost(7);
    e10.setId(10);
    e11.setCost(2);
    e11.setId(11);
    e12.setCost(15);
    e12.setId(12);
    e13.setCost(3);
    e13.setId(13);
    e14.setCost(10);
    e14.setId(14);


    PriorityQueue pq;
    //bool c = pq.isEmpty();

    pq.push(e);
    pq.push(e1);
    pq.push(e2);
    pq.push(e3);
    pq.push(e4);
    pq.push(e5);
    pq.push(e6);
    pq.push(e7);
    pq.push(e8);
    pq.push(e9);
    pq.push(e10);
    pq.push(e11);
    pq.push(e12);
    pq.push(e13);
    pq.push(e14);
    //pq.display();
    //cout<<endl;
    pq.pop();
    pq.removeElement(e8);//12
    pq.removeElement(e13);//3
    pq.pop();
    pq.removeElement(e4);
    pq.display();
*/
    node e,e1,e2;
    PriorityQueue pq;
    e.setCost(0);
    e.setId(0);
    e1.setCost(49);
    e1.setId(1);
    e2.setCost(22);
    e2.setId(2);
    pq.push(e);
    pq.push(e1);
    pq.push(e2);
    pq.pop();
    pq.pop();
    pq.display();

    return 0;
}
