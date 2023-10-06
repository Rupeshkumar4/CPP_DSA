#include <iostream>
#include <algorithm>
using namespace std;

int productSmallestPair(int *array, int n, int sum)
{
    sort(array,array+n);
    int product = (array[0])*(array[1]);
    int total = (array[0])+(array[1]);
    if(sum>=total)return product;
    else return -1;
}

int main()
{
    int n, sum, result, i;
    std::cin >> sum;
    std::cin >> n;
    int *array = new int[n];
    for (i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    result = productSmallestPair(array, n, sum);
    std::cout << result;
    delete[] array;
    return 0;
}