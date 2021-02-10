#ifndef CQUEUE_H
#define CQUEUE_H
#include <vector>

template <class T>
class Queue
{
private:
	std::vector<T> data;

public:
	void enqueue(const T &data)
	{
		this->data.push_back(data);
	}
	T dequeue()
	{
		T content = this->data[0];
		this->data.erase(this->data.begin());
		return content;
	}
	T peek()
	{
		return this->data[0];
	}
};

#endif // !CQUEUE_H
