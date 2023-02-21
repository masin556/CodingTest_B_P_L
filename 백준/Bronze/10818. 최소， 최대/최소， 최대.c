#include <stdio.h>

int main()
{
    int n, num, i;
    int max=-1000000, min=1000000;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &num);

        if(num > max)
            max = num;

        if(num < min)
            min = num;
    }

    printf("%d %d\n", min, max);

    return 0;
}