#include <stdio.h>
int main()
{
    int choice;
    printf("\n ---------------Menu-------------\n");
    printf("\n 1 : Even and Odd ");
    printf("\n 2 : Greater Among 2 Numbers ");
    printf("\n 3 : +Ve and -Ve ");
    printf("\n 4 : Profit and Loss ");
    printf("\n 5 : Area of Circle ");

    printf("\n Which operation u want to perform : =  ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5)
    {
        if (choice == 1)
        {
            int num;
            printf("\n Enter the number : = ");
            scanf("%d", &num);
            (num %2 == 0)?printf("Its an Even"):printf("Its an Odd");
        }
        else if (choice == 2)
        {
            int a,b;
            printf("Enter the 2 numbers");
            scanf("%d%d",&a,&b);
            (a>b)?printf("\n a = %d is Greater ..! \n", a):printf("\n b = %d is Greater ..! \n", b);
        }
        else if (choice == 3)
        {
            int num;
            printf("\n Enter the number : = ");
            scanf("%d", &num);
            (num >= 0)?printf("\n the number is +ve "):printf("\n the number is -ve  ");
        }
        else if (choice == 4)
        {
            int sellingPrice, actualPrice, profit, loss;
            printf("\n Enter the Actual Price of the Product : = ");
            scanf("%d", &actualPrice);
            printf("\n Enter the Selling Price of the Product : = ");
            scanf("%d", &sellingPrice);
            // if else ladder
            if (sellingPrice > actualPrice)
            {
                profit = sellingPrice - actualPrice;
                printf("\n The Profit is : = %d ", profit);
            }
            else if (sellingPrice == actualPrice)
            {
                printf("\n Equal Margin ..! ");
            }
            else
            {
                loss = actualPrice - sellingPrice;
                printf("\n The Loss is : = %d ", loss);
            }
        }
        else if (choice == 5)
        {
            float radius;
            printf("Enter the radius CM ");
            scanf("%f",&radius);
            printf("\n The Area if the circle is : = %f", 3.14 * radius * radius);
        }
    }
    else
    {
        printf("\n Invalid choice ...!\n");
    }

    return 0;
}