# exer-9-2
Use two queues to form one stack

appendHead:
	move the elements from queue1 to queue2, make sure that queue1 is empty.
	after appending, the size of queue1 is 1.

deleteHead:

queue1.size==0&&queue2.size==0
    throw runtime_error
queue1.size==0&&queue2.size!=0
    move n-1 elements from queue2 to queue1, delete queue2.front()
queue1.size==1
    delete queue1.front()
