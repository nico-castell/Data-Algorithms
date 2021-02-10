#ifndef CSTACK_H
#define CSTACK_H
#include <vector>

template <class T>
class Stack
{
private:
	std::vector<T> data;

public:
	void push(const T &data)
	{
		this->data.push_back(data);
	}
	T pop()
	{
		T content = this->data[this->data.size() - 1];
		this->data.pop_back();
		return content;
	}
	T peek()
	{
		return this->data[this->data.size() - 1];
	}
};

#endif // !CSTACK_H
