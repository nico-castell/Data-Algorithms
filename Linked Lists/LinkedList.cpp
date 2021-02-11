#include "LinkedList.hpp"

Node::Node(const int& data)
{
    this->data = data;
}

LinkedList::LinkedList(Node start)
{
    this->start = &start;
}

Node LinkedList::get(const int& index)
{
    Node node = *start;
    for (int i = 0; i < index; i++)
        node = *node.next;
    return node;
}

void LinkedList::add(const int& index, Node node)
{
    node = get(index);
    node.next = &node;
}

void LinkedList::del(const int& index)
{
    Node prev = get(index - 1);
    Node after = get(index + 1);
    prev.next = &after;
    // get(index -1).next = &(get(index +1));
}

void LinkedList::add_beginning(Node new_start)
{
    new_start.next = &(*start);
    start = &new_start;
}

void LinkedList::del_beginning()
{
    Node node = *start;
    start = node.next;
}
