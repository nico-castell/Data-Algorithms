#include <iostream>
#include <sstream>
#include <vector>

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Selection sort algorithm: O(n^2)
int main()
{
    std::vector<double> Input /*  = {1, 4, 5, 2, 6, 7, 3, 0, 9, 8} */;

    // Prepare and prompt to fill the vector.
    std::cout << "Please input a list of integers separated by spaces: ";
    std::string line;
    double number;

    // Fill the vector by taking a string and turning it into an istream to
    //   fill each position in the vector.
    std::getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> number)
        Input.push_back(number);

    // Sort the list.
    for (int i = 0; i < Input.size(); i++)
    {
        // Use the index of the smallest value found to swap the variables
        //   at the end of this iteration.
        int IndexOfSmallest = i;
        for (int j = i; j < Input.size(); j++)
            if (Input[IndexOfSmallest] > Input[j])
                IndexOfSmallest = j;

        if (i != IndexOfSmallest) // Don't swap if they're the same (it's a waste).
            Swap(Input[i], Input[IndexOfSmallest]);
    }

    // Print everything to the console
    for (int i = 0; i < Input.size(); i++)
        std::cout << Input[i] << "  ";
    std::cout << "\n";

    return 0;
}
