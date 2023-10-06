#include <iostream>
#include <iostream>
#include <algorithm>
using namespace std;
class Date
{
public:
    int d, m, y;
};
bool compare(const Date &date1, const Date &date2)
{
    if (date1.y < date2.y)
        return true;
    if (date1.y == date2.y && date1.m < date2.m)
        return true;
    if (date1.y == date2.y && date1.m == date2.m && date1.d < date2.d)
        return true;
    return false;
}
void sortDateArray(Date arr[], int n)
{
    sort(arr, arr + n, compare);
}
int main()
{
    Date arr[] = {{20, 1, 2017},
                  {25, 3, 2010},
                  {3, 12, 1956},
                  {18, 10, 1982},
                  {19, 4, 2011},
                  {9, 7, 2013}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortDateArray(arr, n);
    cout << "Sorted dates are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].d << " " << arr[i].m << " " << arr[i].y << endl;
    }
}