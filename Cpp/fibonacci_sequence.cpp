#include <iostream>

int main()
{
    uint n;
    std::cout << "Type a length of the array: ";
    std::cin >> n;

    int* array = new int[n + 1];
    array[0] = 0;

    if(n > 0)
    {
        array[1] = 1;
    }
    else
    {
        std::cout << "F(0) -> 0";
        return 0;
    }

    if(n > 1)
    {
        for(int i = 2; i < n + 1; ++i)
        {
            array[i] = array[i - 2] + array[i - 1];
        }
    }

    for(int i = 0; i < n + 1; ++i)
    {
        std::cout << "F(" << i << ") ->" << array[i] << std::endl;
    }
    
    delete[] array;
    return 0;
}