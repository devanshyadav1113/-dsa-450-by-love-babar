#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int arr[4] = {1, 2, 8, 6};
    for (int i = 0; i < 4; i++)
    {
        ans = ans + arr[i];
    }
    cout << ans;

    return 0;
}