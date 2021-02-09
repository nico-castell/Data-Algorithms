#!/usr/bin/python3

# Use a list as a stack.
data = []
data.append(5) # push
data.append(10)
data.append(15)
data.append(20)
element = data.pop() # pop
print(element)
print(data[len(data) - 1]) # peek
