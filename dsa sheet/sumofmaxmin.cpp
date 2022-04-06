#include <iostream>
using namespace std;
void sumOfMaxMin(int arr[], int n)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    int sum = maxi + mini;

    return sum;
}
int main()
{
    int arr[5] = {1, 3, 8, 6, 2};
    sumOfMaxMin(arr, 5);
    return 0;
}