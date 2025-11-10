#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:\n");
    scanf("%d",&a);
    int fact(int a);
    printf("%d", fact(a));
    }
    int fact(int n){
        if (n==1)
            return 1;
        else
            return(n*fact(n-1));
    }
