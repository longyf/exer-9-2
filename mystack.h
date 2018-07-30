#ifndef mystack_h
#define mystack_h
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
	while (!queue1.empty()) {
		queue2.push(queue1.front());
		queue1.pop();
	}

	queue1.push(node);
}

template <class T>
T mystack<T>::deleteHead() {
	
	if (queue1.empty()&&queue2.empty()) {
		//q1.size==0&&q2.size==0
		throw runtime_error("Can not delete an element from an empty stack.");
	}

	if (queue1.size()==0) {
		//leave the element to be deleted in queue1.
		while (queue2.size()!=0) {
			queue1.push(queue2.front());
			queue2.pop();
		}
		while (queue1.size() != 1) {
			queue2.push(queue1.front());
			queue1.pop();
		}
	}

    T temp=queue1.front();
    queue1.pop();
    return temp;
}
#endif
