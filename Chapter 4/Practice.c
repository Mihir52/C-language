#include <stdio.h>

int main()
{
    int n;
    for (int i = 90; i < 100; i++)
    {
        for (n = 2; n < i; n++)
        {
            if (i % n == 0)
            {
                break;
            }
        }
        if (n == i)
        {
            printf("%d ", i);
        }
    }

    /*
    int n;

    for (int i = 0; i <= n; i++)
    {
        printf("enter number : ");
        scanf("%d", &n);
        if (n % 7 == 0)
        {
            break;
        }
    }
    printf("%d is multiple of 7",n);
    */

    /*
        int n;
        while (1)
        {
            printf("enter number : ");
            scanf("%d", &n);
            if (n % 2 != 0)
            {
                break;;
            }

        }
        */

    /*
        for (int i = 5; i <= 50; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d", i);
            }
        }
        */
    /*
 int i = 5;
 while (i <= 50)
 {
     if (i % 2 != 0)
     {
         printf("%d", i);
         i++;
         // continue;
     }
     i++;
 }
 */

    /*
    int i = 5;
    do{
     if (i % 2 != 0)
     {
         printf("%d",i);
         i++;
     }
     i++;

    }while(i <= 50);
    */

    /*
    int fact = 1;
    int n;
    printf("enter number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d",fact);
    */

    /*
        int n,i = 1;
        printf("enter number:");
        scanf("%d", &n);
        int fact = 1;
        while(i <= n){
            fact = fact * i;
            i++;
        }
        printf("%d",fact);
        */

    /*
        int n;
        printf("enter number:");
        scanf("%d", &n);
        int sum;
        for (int i = 10; i >= 1; i--)
        {
            // printf("%d",n * i);
            sum = n * i;
            printf("%d\n",sum);
        }
        */
    /*
    int sum = 0;
        for (int i = 5; i <= 50; i++)
        {
            sum += i;
        }
        printf("%d",sum);
        */

    //     *
    //    * *
    //   * * *
    //  * * * *
    // int row = 4;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int spc = 1; spc <= row - i; spc++)
    //     {
    //         printf(" ");
    //     }
    //     for (int star = 1; star <= i; star++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // int n,i;
    // printf("enter n (greter than 2): ");
    // scanf("%d",&n);
    // for (i = 2; i < 100; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         printf("not prime");
    //         break;
    //     }
    // }
    // if (i == n)
    // {
    //     printf("prime");
    // }
}