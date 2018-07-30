#ifndef mystack_2_h
#define mystack_2_h
#include <iostream>
#include <queue>
#include <stdexcept>

using namespace std;

template <class T>
class mystack {
	public:
		mystack(void);
		~mystack(void);

		void appendHead(const T &node);
		T deleteHead();

	private:
		queue<T> queue1;
		queue<T> queue2;
};

template <class T>
mystack<T>::mystack(void) {}

template <class T>
mystack<T>::~mystack(void) {}

template <class T>
void mystack<T>::appendHead(const T &node) {
	if ((queue1.empty() && queue2.empty()) || (!queue1.empty() && queue2.empty())) {
		queue1.push(node);
	}
	else if (queue1.empty() && !queue2.empty()) {
		queue2.push(node);
	}
	else {
		throw runtime_error("Something is wrong.");
	}
}

template <class T>
T deleteElement(queue<T> &empty, queue<T> &full) {
	//This function is used to delete the last element in an empty queue.
	while (full.size() != 1) {
		empty.push(full.front());
		full.pop();
	}
	T temp = full.front();
	full.pop();
	return temp;
}

template <class T>
T mystack<T>::deleteHead() {
	
	if (queue1.empty()&&queue2.empty()) 
		throw runtime_error("Can not delete an element from an empty stack.");
	else if (queue1.empty() && !queue2.empty()) 
		return deleteElement(queue1, queue2);
	else if (queue2.empty() && !queue1.empty()) 
		return deleteElement(queue2, queue1);
	else 
		throw runtime_error("Something is wrong.");

}
#endif
