#ifndef _list_h
#define _list_h
#include <iostream>
using namespace std;

template<typename T>
struct node{
	T data;
	node<T> *prev;
	node<T> *next;
};
//list class
template <typename T>
class List{
private:
	node<T> *head;
	node<T> *curr;
	node<T> *temp;
	node<T> *newNode;
	int size_counter;

public:
    List();
    void push_front(T element);
    void push_back(T element);
    void insert(int index,T element);
    void remove(T element);
    void pop_front();
    void pop_back();
  	void reverse();
  	void reversePrint();
  	bool empty();
  	int size();
    void print();
};


//List implementation
template<typename T>
List<T>::List(){
	head=NULL;
	curr=NULL;
	temp=NULL;
	newNode=NULL;
	size_counter=0;
}
template <typename T>
void List<T>::push_front(T element){
	temp = new node<T>;
	temp->data = element;
	if(head!=NULL){
		temp->next = head;
		temp->prev = NULL;
		head->prev = temp;
		head = temp;
	}else{
		temp->next = head;
		temp->prev = head;
		head = temp;
	}
	size_counter++;
}
template<typename T>
void List<T>::push_back(T element){
	temp = new node<T>;
	temp->data = element;
	if(head==NULL){
		temp->next = head;
		temp->prev = head;
		head = temp;
	}else{
		curr = head;
		while(curr->next!=NULL){
			curr = curr->next;
		}
		temp->next = curr->next;
		temp->prev = curr;
		curr->next = temp;
	}
	size_counter++;
}
template<typename T>
void List<T>::insert(int index,T element){
	if(index<size_counter){
		temp = new node<T>;
		temp->data = element;
		if(index==0){
			temp->next = head;
			temp->prev = head;
			head=temp;
		}else{
			curr=head;
			for(int i=0;i<index-1;i++){
				curr=curr->next;
			}
			temp->next = curr->next;
			curr->next->prev = temp;
			temp->prev = curr;
			curr->next = temp;
		}
		size_counter++;
	}else{
		cout<<"Index out of bound"<<endl;
	}
}
template<typename T>
void List<T>::remove(T element){
	if(empty()){
		cout<<"List is empty"<<endl;
	}else{
		curr = head;
		int counter = 0;
		for(int i=0;i<size_counter;i++){
			if(curr->data==element && i==0){
				pop_front();
                counter=1;
			}else if(curr->data==element){
                curr->prev->next = curr->next;
				curr->next->prev = curr->prev;
				delete curr;
				counter=1;
			}
			curr=curr->next;
		}
		if(counter==0){
			cout<<"element is not in the list"<<endl;
		}
	}
}
template<typename T>
void List<T>::pop_front(){
	if(empty()){
		cout<<"List is empty"<<endl;
	}else{
		temp = head->next;
		temp->prev=NULL;
		delete head;
		head = temp;
	}
}
template<typename T>
void List<T>::pop_back(){
	if(empty()){
		cout<<"List is empty"<<endl;
	}else{
		curr = head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->prev->next=NULL;
		delete curr;
	}
}

template<typename T>
void List<T>::reverse(){
	//not done yet
	curr = head;
	node<T> *prev,*next;
	prev = NULL;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}

template<typename T>
void List<T>::print(){
	curr = head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
template<typename T>
void List<T>::reversePrint(){
	curr=head;
	while(curr->next!=NULL){
		curr = curr->next;
	}
	temp=curr;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
}
template <typename T>
int List<T>::size(){
	return size_counter;
}
template<typename T>
bool List<T>::empty(){
	if(size_counter==0){
		return true;
	}
	return false;
}

#endif
