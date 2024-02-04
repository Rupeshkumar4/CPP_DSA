#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Give 2 number";
        return 0;
    }
    int lower = atoi(argv[1]);
    int upper = atoi(argv[2]);
    int cnt = 0;
    for (int i = lower ; i <= upper; i++)
    {
        bool prime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cnt++;
        }
    }
    cout << cnt << " ";
    return 0;
}
