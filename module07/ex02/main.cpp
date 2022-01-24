#include <iostream>
#include "Array.hpp"

#define MAX_VAL 7
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	std::cout << ">>set number's elements<<\n";
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
		std::cout << value << std::endl;
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << "\n>>copy numbers to tmp, test<<\n";
    //SCOPE
//	{
        Array<int> tmp = numbers;
        Array<int> test(tmp);
//	}

//	numbers[0] = rand();

    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << numbers[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << ">>change number's elements<<\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		std::cout << numbers[i] << std::endl;
    }
    delete [] mirror;//

	std::cout << "\n>>print tmp's elements<<\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << tmp[i] << std::endl;
        if (tmp[i] != test[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    return 0;
}
