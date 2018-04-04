# exer-9-2
Use two queues to form one stack

appendHead:
	move the elements from queue1 to queue2, make sure that queue1 is empty.
	after appending, the size of queue1 is 1.

deleteHead:
	if size of queue1 is 1.
		delete the element.
	else: size of queue1 is 0.
		move the elements from queue2 to queue1, then move n-1 elements from queue1 to queue2. 
		now there are just one element in queue1.
		delete that element.
