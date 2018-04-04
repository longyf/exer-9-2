#include <iostream>
#include <stdexcept>
#include "mystack.h"

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
	cout<<stack.deleteHead()<<endl;
	
	return 0;
}
