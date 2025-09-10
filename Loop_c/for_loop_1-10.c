 #include <stdio.h>
// int main()
// {

//   int i;
//   for (i = 0; i < 10; i++)
//   {
//     printf("The series is := %d\n", i);
//   }

//   return 0;
// }

//reverse using limit


int main() {
    int limit, i;

    
    printf("Enter the limit: ");
    scanf("%d", &limit);

    for(i = limit; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
