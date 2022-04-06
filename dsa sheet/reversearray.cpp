#include <iostream>
using namespace std;
int main()
{
    int m = 3;
    int arr[6] = {1, 2, 4, 2, 6, 8};
    swap(arr[m + 1], arr[5]);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }

    return 0;
}
 