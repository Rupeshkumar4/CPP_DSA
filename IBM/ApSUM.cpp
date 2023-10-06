// IBM Coding Questions: Find the sum of A.P series

#include<iostream>
using namespace std;
 
// Function to find sum of series.
float sumOfAP(float a, float d, int n)
{
    float sum = 0;
    sum = n/2*(2*a+(n-1)*d);
    return sum;
}
 
int main()
{
    int n = 4;
    float a = 1, d = 2;
    cout<<sumOfAP(a, d, n);
    return 0;
}