#pragma once

struct Node
{
    int data;
    Node *next;
    Node(const int &data);
};

class LinkedList
{
    Node *start;
    LinkedList(Node start);
    Node get(const int& index);
    void add(const int& index, Node node);
    void del(const int& index);
    void add_beginning(Node new_start);
    void del_beginning();
};
