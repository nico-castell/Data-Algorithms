#!/usr/bin/python3
from collections import deque

# Wrap a deque to only have Queue functionality
class Queue:
    def __init__(self):
        self._data = deque()

    def enqueue(self, data):
        self._data.append(data)

    def dequeue(self):
        return self._data.popleft()

    def peek(self):
        return self._data[0]


my_queue = Queue()
my_queue.enqueue(5)
my_queue.enqueue(10)
my_queue.enqueue(15)
my_queue.enqueue(20)
print(str(my_queue.dequeue()))
print(str(my_queue.peek()))
