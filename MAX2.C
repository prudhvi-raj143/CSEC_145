#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int cur = 0;

        for (int j = i; j < n; j++)
        {
            cur += a[j];

            if (cur > max)
            {
                max = cur;
            }
        }
    }

    printf("%d\n", max);

    return 0;
}