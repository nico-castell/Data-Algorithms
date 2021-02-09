#!/usr/bin/python3

# Use a list as a queue.
data = []
data.append(5) # enqueue
data.append(10)
data.append(15)
data.append(20)
element = data.pop(0) # dequeue - O(n) operation
print(element)
print(data[0]) # peek

# Using a deque
from collections import deque
myq = deque()
myq.append(5) # enqueue
myq.append(10)
myq.append(15)
myq.append(20)
element = myq.popleft() # deque
print(element)
print(myq[0]) # peek
