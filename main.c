/*
  simple calculator
  by Francesco
  on Feb 2022
  MIT license
  c89 compiler
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int n1,n2,total;

    printf("Enter the prices: \n");
    scanf("%d%d", &n1, &n2);

     total = n1 + n2;
     printf("the total: %d", total);

    return 0;
}



/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int n1,n2,sum,diff,product;
    char name[100];
    float quot;
    printf("simple calculator!\n");
    //capture input
    printf("Enter your name: ");
    gets(name);
    printf("Enter two integers: ");
    scanf("%d%d", &n1,&n2);
    //computations
    sum= n1+ n2;
    diff= n1- n2;
    product=n1* n2;
    quot=(float)n1/n2;

    //outputs
    printf("Hey %s, here is your results: \n", name);
    printf("%d + %d = %d\n",n1,n2,sum);
    printf("%d - %d = %d\n",n1,n2,diff);
    printf("%d * %d = %d\n",n1,n2,product);
    printf("%d / %d = %f\n",n1,n2,quot);
    return 0;
}
*/
