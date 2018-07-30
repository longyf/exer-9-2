#include <iostream>
#include <stdexcept>
#include "mystack-2.h"

using namespace std;

int main() {
	mystack<int> stack;
	stack.appendHead(1);
	cout<<stack.deleteHead()<<endl;
	stack.appendHead(2);
	stack.appendHead(3);
	cout<<stack.deleteHead()<<endl;
	stack.appendHead(4);
	cout<<stack.deleteHead()<<endl;
	cout<<stack.deleteHead()<<endl;

	cout<<"Now stack is empty."<<endl;

	try {
		cout<<stack.deleteHead()<<endl;
	} catch (runtime_error err) {
		cout<<err.what()<<endl;
	}
	
	return 0;
}
