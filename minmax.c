#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 10};
    int n = 5;

    int mini = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)

    {
        if (arr[i] < mini)
            mini = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d", mini);
    printf("%d", max);

    return 0;
}