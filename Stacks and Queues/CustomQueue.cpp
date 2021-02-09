#include <iostream>
#include <vector>

template <class ItemType>
class Queue
{
private:
    std::vector<ItemType> data;

public:
    void enqueue(const ItemType &data)
    {
        this->data.push_back(data);
    }
    ItemType dequeue()
    {
        ItemType content = this->data[0];
        this->data.erase(this->data.begin());
        return content;
    }
    ItemType peek()
    {
        return this->data[0];
    }
};

int main()
{
    Queue<int> my_numbers;
    for (int i = 5; i < 21; i += 5) // Fill with 5, 10, 15, 20
        my_numbers.enqueue(i);
    for (int i = 0; i < 2; i++)
        std::cout << my_numbers.dequeue() << "\n";
    for (int i = 0; i < 2; i++)
        std::cout << my_numbers.peek() << "\n";

    Queue<std::string> my_sentences;
    my_sentences.enqueue("I love cake");
    my_sentences.enqueue("I love chocolate");
    my_sentences.enqueue("I love chocolate cake");
    for (int i = 0; i < 2; i++)
        std::cout << my_sentences.dequeue() << "\n";
    for (int i = 0; i < 2; i++)
        std::cout << my_sentences.peek() << "\n";

    return 0;
}
