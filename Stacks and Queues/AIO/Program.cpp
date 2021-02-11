#include "cQueue.cpp"
#include "cStack.cpp"
#include <iostream>

int main()
{
    Queue<int> my_queue;
    Stack<int> my_stack;

    int start_tests   = 5;   // Start pushing or enqueing numbers from:
    int end_tests     = 41;  // End pushing or enqueing numbers at:
    int between_tests = 5;   // Add multiples of:
    int pop_tests     = 4;   // Number of pop or dequeue tests to run
    int peek_tests    = 2;   // Number of peek tests to run

    // Testing Queue
    std::cout << "\e[42;30;01mTesting Queue:\e[00m\n";
    for (int i = start_tests; i < end_tests; i += between_tests)
        my_queue.enqueue(i);
    for (int i = 0; i < pop_tests; i++)
        std::cout << "\e[31m" << my_queue.dequeue() << "\e[00m\n";
    for (int i = 0; i < peek_tests; i++)
        std::cout << "\e[36m" << my_queue.peek() << "\e[00m\n";

    // Testing Stack
    std::cout << "\n\e[42;30;01mTesting Stack:\e[00m\n";
    for (int i = start_tests; i < end_tests; i += between_tests)
        my_stack.push(i);
    for (int i = 0; i < pop_tests; i++)
        std::cout << "\e[31m" << my_stack.pop() << "\e[00m\n";
    for (int i = 0; i < peek_tests; i++)
        std::cout << "\e[36m" << my_stack.peek() << "\e[00m\n";

    return 0;
}
