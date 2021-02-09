#include <iostream>

template <class F>
class Stack
{
private:
    class LinkedList
    {
    private:
        class Node
        {
        public:
            F data;
            Node* next;
            Node(F data)
            {
                this->data = data;
            }
            // void bye()
            // {
            //     ~Node();
            // }
        };
        Node* start;
        Node* end;
    public:
        void _push(F data)
        {
            Node node(data);
            Node* old_start = this->start;
            this->start = &node;
            node.next = old_start;
        }
        F _pop()
        {
            Node node = *this->start;
            F content = node.data;
            Node* new_start = node.next;
            this->start = new_start;
            // node.bye();
            return content;
        }
        F _peek()
        {
            Node node = *this->start;
            return node.data;
        }
    };
    LinkedList list;

public:
    void push(F data)
    {
        list._push(data);
    }
    F pop()
    {
        return list._pop();
    }
    F peek()
    {
        return list._peek();
    }
};

int main()
{
    Stack<int> my_stack;
    for (int i = 5; i < 21; i += 5)
        my_stack.push(i);
    std::cout << my_stack.peek() << "\n";
    std::cout << my_stack.pop() << "\n";
    return 0;
}
