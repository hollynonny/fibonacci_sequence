#include <iostream>

void do_array(int* arr, uint n);
void print_array(int* arr, uint n);

int main()
{
    uint n;
    std::cout << "Type the length of the array: ";
    std::cin >> n;

    if(n < 2)
    {
        std::cout << "F(1) -> 0" << std::endl;
        return 0;
    }

    int* array = new int[n];
    do_array(array, n);
    print_array(array, n);

    delete[] array;
    return 0;
}

void do_array(int* arr, uint n)
{
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < n; ++i)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
}

void print_array(int* arr, uint n)
{
    for(int i = 0; i < n; ++i)
    {
        std::cout << "F(" << i+1 << ") -> " << arr[i] << std::endl;
    }
}