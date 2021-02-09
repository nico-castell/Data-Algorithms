#!/usr/bin/python3

# Wrap a list in a custom object to control how it can be used.
class Stack:
    def __init__(self):
        self._data = []

    def push(self, data):
        self._data.append(data)

    def pop(self):
        return self._data.pop()

    def peek(self):
        return self._data[len(self._data) - 1]


my_stack = Stack()
my_stack.push(5)
my_stack.push(10)
my_stack.push(15)
my_stack.push(20)
print(my_stack.pop())
print(my_stack.peek())
