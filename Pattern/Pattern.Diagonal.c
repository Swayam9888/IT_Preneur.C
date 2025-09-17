#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++) // rows
    {
        for (int j = 1; j <= 5; j++) // cols
        {
            if (j == i)
            {
                printf("* ");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}