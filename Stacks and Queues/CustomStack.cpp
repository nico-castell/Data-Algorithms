#include <iostream>
#include <vector>

template <class ItemType>
class Stack
{
private:
    std::vector<ItemType> data;

public:
    void push(const ItemType& data)
    {
        this->data.push_back(data);
    }
    ItemType pop()
    {
        ItemType content = this->data[data.size() - 1];
        this->data.pop_back();
        return content;
    }
    ItemType peek()
    {
        return this->data[data.size() - 1];
    }
};

int main()
{
    Stack<int> my_numbers;
    for (int i = 5; i < 21; i += 5) // Fill with 5, 10, 15, 20
        my_numbers.push(i);
    for (int i = 0; i < 2; i++)
        std::cout << my_numbers.pop() << "\n";
    for (int i = 0; i < 2; i++)
        std::cout << my_numbers.peek() << "\n";

    Stack<std::string> my_sentences;
    my_sentences.push("I love cake");
    my_sentences.push("I love chocolate");
    my_sentences.push("I love chocolate cake");
    for (int i = 0; i < 2; i++)
        std::cout << my_sentences.pop() << "\n";
    for (int i = 0; i < 2; i++)
        std::cout << my_sentences.peek() << "\n";

    return 0;
}
