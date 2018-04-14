#include <iostream>
#include "List.h"

using namespace std;



int main(){
	
	List<float>myList;
	
	myList.push_front(1);
	myList.push_front(2);
	myList.push_front(3);
	myList.push_front(4);
	myList.push_back(5);
	myList.push_back(6);
	myList.insert(5,13);
	//myList.reverse();
	myList.print();
	myList.reversePrint();

	//cout<<myList.size();
	return 0;
}
